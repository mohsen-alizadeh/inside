#include <ruby.h>
#include <vm_debug.h>
#include <node.h>
#include <internal/parse.h>
#include "parse.h"

void Init_inside()
{
  VALUE mInside = rb_define_module("Inside");
  rb_define_module_function(mInside, "parse", parse, 1);
}

