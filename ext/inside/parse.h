#ifndef PARSE_H
#define PARSE_H

#include <vm_debug.h>
#include <node.h>
#include <internal/parse.h>

VALUE parse(VALUE, VALUE);
VALUE node_to_hash(NODE *);
VALUE tbl_to_hash(ID tbl);

#endif
