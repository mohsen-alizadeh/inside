# Ruby Inside:

*inside* is a ruby gem to reveal what can found inside ruby. It is an experimental project to learn ruby internals.

## TODO
* show tokens
* parse string as a ruby code and show AST tree
* generate bytecode
* show internal stacks while running the code
* run bytecodes step by step and show internal stacks


## AST Nodes

* NODE_SCOPE
  * nd_tbl      ->    ID u1.tbl
  * nd_body     ->    Node u2.node
  * nd_args     ->    Node u3.node

