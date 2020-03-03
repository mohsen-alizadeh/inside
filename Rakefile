# -*- ruby -*-

require "rubygems"
require "hoe"
require 'rake/extensiontask'

# Hoe.plugin :compiler
# Hoe.plugin :gem_prelude_sucks
# Hoe.plugin :inline
# Hoe.plugin :minitest
# Hoe.plugin :racc
# Hoe.plugin :rcov
# Hoe.plugin :rdoc

Hoe.spec "inside" do
  developer("Mohsen Alizadeh", "mohsen@alizadeh.us")

  self.extra_dev_deps << ['rake-compiler', '~> 1.1.0']
  self.spec_extras = { :extensions => ["ext/inside/extconf.rb"] }

  Rake::ExtensionTask.new('inside', spec) do |ext|
    ext.lib_dir = File.join('lib', 'inside')
  end

  license "MIT" # this should match the license in the README
end
Rake::Task[:test].prerequisites << :compile
# vim: syntax=ruby
