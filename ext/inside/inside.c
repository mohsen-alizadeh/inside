#include <ruby.h>

VALUE hello_world(VALUE mod)
{
  return rb_str_new2("hello world");
}

void Init_inside()
{
  VALUE mInside = rb_define_module("Inside");
  rb_define_module_function(mInside, "hello_world", hello_world, 0);
}

