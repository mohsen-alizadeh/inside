
#include "parse.h"
#include <stdio.h>

const char *
node_name(int node)
{
  switch (node) {
#include <node_name.inc>
    default:
      rb_bug("unknown node: %d", node);
      return 0;
  }
}

VALUE parse(VALUE mod, VALUE str)
{
  rb_ast_t *ast = 0;
  NODE *node;
  VALUE h;

  dp(str);

 // StringValue(str);
  ast = rb_parser_compile_string_path(rb_parser_set_context(rb_parser_new(), NULL, 0), Qnil, str, 1);

  node = ast->body.root;

  h = rb_hash_new();

  rb_hash_aset(h, ID2SYM(rb_intern("root")), node_to_hash(node));

  return h;
}

VALUE node_to_hash(NODE *node)
{
  VALUE h;

  h = rb_hash_new();

  //rb_hash_aset(h, ID2SYM(rb_intern("u1")), node_to_hash(node->u1.node));


  rb_hash_aset(h, ID2SYM(rb_intern("nd_type")), rb_str_new_cstr(node_name(nd_type(node))));

  fprintf(stderr, ">>>>>>>>>>>>>>>\n");
  dpn(node);
  fprintf(stderr, "%s \n", node_name(nd_type(node)));
  fprintf(stderr, "<<<<<<<<<<<<<<<\n");

  switch(nd_type(node)) {
    case NODE_SCOPE:
      rb_hash_aset(h, ID2SYM(rb_intern("nd_tbl")), tbl_to_hash(node->nd_tbl));
      /* rb_hash_aset(h, ID2SYM(rb_intern("nd_args")), node_to_hash(node->nd_args)); */
      rb_hash_aset(h, ID2SYM(rb_intern("nd_body")), node_to_hash(node->nd_body));
      break;

    case NODE_OP_CDECL:
      rb_hash_aset(h, ID2SYM(rb_intern("nd_args")), node_to_hash(node->nd_args));
      rb_hash_aset(h, ID2SYM(rb_intern("nd_recv")), node_to_hash(node->nd_recv));
      break;

    case NODE_SUPER:
      dp(rb_str_new_cstr("felan"));
      break;

    case NODE_MATCH2:

      /* dpn(node->nd_value); */
      /* rb_hash_aset(h, ID2SYM(rb_intern("nd_recv")), node_to_hash(node->nd_recv, "nd_recv")); */
      /* rb_hash_aset(h, ID2SYM(rb_intern("nd_value")), node_to_hash(node->nd_value, "nd_value")); */

      break;
    case NODE_LIT:

      break;
  }

  return h;
}

VALUE tbl_to_hash(ID tbl)
{
  VALUE h;

  h = rb_hash_new();

  if (RB_TYPE_P(tbl, T_FALSE)) {
    rb_hash_aset(h, ID2SYM(rb_intern("tbl")), rb_str_new_cstr("T_FALSE"));
  } else {
    rb_hash_aset(h, ID2SYM(rb_intern("tbl")), INT2NUM(tbl));
  }


  return h;
}
