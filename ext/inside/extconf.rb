require 'mkmf'

LIBDIR      = RbConfig::CONFIG['libdir']
INCLUDEDIR  = RbConfig::CONFIG['includedir']

HEADER_DIRS = [
  # First search /opt/local for macports
  '/opt/local/include',

  # Then search /usr/local for people that installed from source
  '/usr/local/include',

  # ruby source
  '/home/mohsen/projects/ruby',

  # Check the ruby install locations
  INCLUDEDIR,

  # Finally fall back to /usr
  '/usr/include',
]

LIB_DIRS = [
  # First search /opt/local for macports
  '/opt/local/lib',

  # Then search /usr/local for people that installed from source
  '/usr/local/lib',

  # Check the ruby install locations
  LIBDIR,

  # Finally fall back to /usr
  '/usr/lib',
]

# $VPATH << '$(topdir)' << '$(top_srcdir)'
$topdir = '/home/mohsen/.rvm/src/ruby-2.6.3'


# raise 'header is missing' unless find_header('node.h')

dir_config('inside', HEADER_DIRS, LIB_DIRS)

# $objs = %w[parse.o inside.o]

puts "header ruby.h"
puts have_header("ruby.h").inspect

raise "ruby.h not found" unless have_header("ruby.h")

create_makefile('inside/inside')
