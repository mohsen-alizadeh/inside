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
  nd_head | NODE | u1.node
  nd_value | NODE | u2.node
  nd_args | NODE | u3.node

* NODE_BREAK

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_stts | NODE | u1.node

* NODE_NEXT

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_stts | NODE | u1.node

* NODE_REDO

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_RETRY

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_BEGIN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_body | NODE | u2.node

* NODE_RESCUE

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE | u1.node
  nd_resq | NODE | u2.node
  nd_else | NODE | u3.node

* NODE_RESBODY

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE | u1.node
  nd_body | NODE | u2.node
  nd_args | NODE | u3.node 

* NODE_ENSURE

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE | u1.node
  nd_ensr | NODE | u3.node 

* NODE_AND

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_1st | NODE | u1.node
  nd_2nd | NODE | u2.node

* NODE_OR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_1st | NODE | u1.node
  nd_2nd | NODE | u2.node

* NODE_MASGN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE | u1.node
  nd_value | NODE | u2.node
  nd_args | NODE | u3.node

* NODE_LASGN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_vid  | ID | u1.id
  nd_value | NODE | u2.node

* NODE_DASGN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_vid  | ID | u1.id
  nd_value | NODE | u2.node

* NODE_DASGN_CURR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_vid  | ID | u1.id
  nd_value | NODE | u2.node

* NODE_GASGN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_IASGN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_vid  | ID | u1.id
  nd_value | NODE | u2.node

* NODE_CDECL

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_vid  | ID | u1.id
  nd_value | NODE | u2.node
  nd_mid | ID | u2.id
  nd_else | NODE | u3.node

* NODE_CVASGN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_vid  | ID | u1.id
  nd_value | NODE | u2.node

* NODE_OP_ASGN1

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_recv | NODE | u1.node
  nd_mid | ID | u2.id
  nd_args | NODE | u3.node

* NODE_OP_ASGN2

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_recv | NODE | u1.node
  nd_value | NODE | u2.node
  nd_next | NODE | u3.node
  

* NODE_OP_ASGN_AND

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE |u1.node
  nd_val | NODE | u2.node


* NODE_OP_ASGN_OR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE |u1.node
  nd_val | NODE | u2.node

* NODE_OP_CDECL

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE |u1.node
  nd_aid|
  nd_val | NODE | u2.node

* NODE_CALL

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_recv | NODE |u1.node
  nd_mid | ID | u2.id
  nd_args | NODE |u3.node

* NODE_OPCALL

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_recv | NODE |u1.node
  nd_mid | ID | u2.id
  nd_args | NODE |u3.node

* NODE_FCALL

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_mid | ID | u2.id
  nd_args | NODE |u3.node

* NODE_VCALL

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_mid | ID | u2.id

* NODE_QCALL

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_recv | NODE |u1.node
  nd_mid | ID | u2.id
  nd_args | NODE |u3.node

* NODE_SUPER

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_ZSUPER

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_args | NODE |u3.node 

* NODE_LIST

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE |u1.node
  nd_next | NODE |u2.node

* NODE_ZLIST

TODO:
  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_VALUES

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE |u1.node
  nd_next | NODE |u2.node

* NODE_HASH

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE |u1.node

* NODE_RETURN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_stts | NODE | u1.node

* NODE_YIELD

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE |u1.node

* NODE_LVAR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_vid | ID | u1.id

* NODE_DVAR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_vid | ID | u1.id

* NODE_GVAR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_vid | ID | u1.id

* NODE_IVAR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_vid | ID | u1.id

* NODE_CONST

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_vid | ID | u1.id

* NODE_CVAR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_vid | ID | u1.id

* NODE_NTH_REF

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_BACK_REF

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_MATCH

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_lit | VALUE |h1.value

* NODE_MATCH2

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_recv | NODE |u1.node
  nd_val | NODE | u2.node
  nd_args | NODE |u3.node

* NODE_MATCH3

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_recv | NODE |u1.node
  nd_val | NODE | u2.node

* NODE_LIT

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_lit | VALUE |h1.value

* NODE_STR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_lit | VALUE |h1.value

* NODE_DSTR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_lit | VALUE |h1.value
  nd_head | NODE |u1.node
  nd_next | NODE |u2.node

* NODE_XSTR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_lit | VALUE |h1.value

* NODE_DXSTR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_lit | VALUE |h1.value
  nd_head | NODE |u1.node
  nd_next | NODE |u2.node

* NODE_EVSTR

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_body | NODE |u2.node

* NODE_DREGX

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_lit | VALUE |h1.value
  nd_head | NODE |u1.node
  nd_next | NODE |u2.node

* NODE_ONCE

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_body | NODE |u2.node

* NODE_ARGS

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_ainfo | ARGS | u3.args

* NODE_ARGS_AUX


  ALIAS | TYPE | UNION FIELD
  --- | --- | ---

* NODE_OPT_ARG

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_body | NODE |u2.node
  nd_next | NODE |u2.node

* NODE_KW_ARG

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_body | NODE |u2.node
  nd_next | NODE |u2.node

* NODE_POSTARG

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_1st | NODE |u1.node
  nd_2nd | NODE |u2.node

* NODE_ARGSCAT

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE |u1.node
  nd_body | NODE |u2.node

* NODE_ARGSPUSH

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE |u1.node
  nd_body | NODE |u2.node

* NODE_SPLAT

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE |u1.node

* NODE_BLOCK_PASS

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE |u1.node
  nd_body | NODE |u2.node

* NODE_DEFN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_mid | ID | u2.id
  nd_defn |NODE | u3.node

* NODE_DEFS

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_recv | NODE |u1.node
  nd_mid | ID | u2.id
  nd_defn |NODE | u3.node

* NODE_ALIAS

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_1st | NODE | u1.node
  nd_2nd | NODE | u2.node

* NODE_VALIAS

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_alias | ID | u1.id
  nd_orig | ID | u2.id

* NODE_UNDEF

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_undef | NODE | u2.node

* NODE_CLASS

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_cpath |NODE | u1.node
  nd_super |NODE | u3.node
  nd_body | NODE |u2.node

* NODE_MODULE

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_cpath |NODE | u1.node
  nd_body | NODE |u2.node

* NODE_SCLASS

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_recv | NODE |u1.node
  nd_body | NODE |u2.node

* NODE_COLON2

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_head | NODE |u1.node
  nd_mid | ID | u2.id

* NODE_COLON3

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_mid | ID | u2.id

* NODE_DOT2

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_beg |NODE | u1.node
  nd_end |NODE | u2.node

* NODE_DOT3

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_beg |NODE | u1.node
  nd_end |NODE | u2.node

* NODE_FLIP2

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_beg |NODE | u1.node
  nd_end |NODE | u2.node

* NODE_FLIP3

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_beg |NODE | u1.node
  nd_end |NODE | u2.node

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
  nd_head | NODE |u1.node

* NODE_POSTEXE

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_body | NODE |u2.node

* NODE_DSYM

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_lit | VALUE |h1.value
  nd_next | NODE |u2.node

* NODE_ATTRASGN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_recv | NODE |u1.node
  nd_mid | ID | u2.id
  nd_args | NODE |u3.node

* NODE_LAMBDA

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_body | NODE |u2.node

* NODE_ARYPTN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_apinfo| apinfo | u3.apinfo
  nd_pconst| NODE | u1.node

* NODE_HSHPTN

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_pkwrestarg| NODE | u3.node

* NODE_LAST

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
