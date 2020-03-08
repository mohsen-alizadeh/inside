## AST Nodes

ruby parses program's code and generate a syntax tree called AST. List of node types are listed

* NODE_SCOPE

  ALIAS | TYPE | UNION FIELD
  --- | --- | ---
  nd_tbl | ID | u1.tbl
  nd_body | NODE | u2.node
  nd_args | NODE | u3.node
