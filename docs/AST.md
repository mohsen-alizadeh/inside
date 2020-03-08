## AST Nodes

ruby parses program's code and generate a syntax tree called AST. List of node types are listed

* NODE_SCOPE

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_tbl | ID | u1.tbl
  nd_body | NODE | u2.node
  nd_args | NODE | u3.node

* NODE_BLOCK

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE | u1.node
  nd_next | NODE | u3.node

* NODE_IF

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_cond | NODE | u1.node
  nd_body | NODE | u2.node
  nd_else | NODE | u3.node

* NODE_UNLESS

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_cond | NODE | u1.node
  nd_body | NODE | u2.node
  nd_else | NODE | u3.node

* NODE_CASE

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE | u1.node
  nd_body | NODE | u2.node

* NODE_CASE2

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE | u1.node
  nd_body | NODE | u2.node

* NODE_CASE3

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE | u1.node
  nd_body | NODE | u2.node

* NODE_WHEN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE | u1.node
  nd_body | NODE | u2.node
  nd_next | NODE | u3.node

* NODE_IN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE | u1.node
  nd_body | NODE | u2.node
  nd_next | NODE | u3.node

* NODE_WHILE

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_cond | NODE | u1.node
  nd_body | NODE | u2.node

* NODE_UNTIL

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_cond | NODE | u1.node
  nd_body | NODE | u2.node

* NODE_ITER

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_iter | NODE | u3.node
  nd_body | NODE | u2.node

* NODE_FOR
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_iter | NODE | u3.node
  nd_body | NODE | u2.node

* NODE_FOR_MASGN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_BREAK

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_NEXT

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_REDO

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_RETRY

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_BEGIN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_RESCUE

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_RESBODY
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_ENSURE

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_AND

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_OR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_MASGN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_LASGN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_DASGN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_DASGN_CURR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_GASGN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_IASGN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_CDECL

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_CVASGN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_OP_ASGN1

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_OP_ASGN2

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_OP_ASGN_AND

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_OP_ASGN_OR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_OP_CDECL

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_CALL

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_OPCALL

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_FCALL

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_VCALL

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_QCALL

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_SUPER

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_ZSUPER

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_LIST

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_ZLIST

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_VALUES

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_HASH

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_RETURN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_YIELD

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_LVAR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_DVAR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_GVAR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_IVAR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_CONST

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_CVAR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_NTH_REF

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_BACK_REF

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_MATCH

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_MATCH2

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_MATCH3

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_LIT

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_STR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_DSTR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_XSTR
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_DXSTR
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_EVSTR
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_DREGX
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_ONCE
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_ARGS
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_ARGS_AUX
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_OPT_ARG
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_KW_ARG
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_POSTARG
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_ARGSCAT
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_ARGSPUSH
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_SPLAT
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_BLOCK_PASS
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_DEFN
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_DEFS
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_ALIAS
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_VALIAS
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_UNDEF
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_CLASS
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_MODULE
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_SCLASS
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_COLON2
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_COLON3
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_DOT2
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_DOT3
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_FLIP2
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_FLIP3
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_SELF
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_NIL
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_TRUE
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_FALSE
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_ERRINFO
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_DEFINED
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_POSTEXE
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_DSYM
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_ATTRASGN
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_LAMBDA
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_ARYPTN
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_HSHPTN
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
* NODE_LAST
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
