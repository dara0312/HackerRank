#!/usr/bin/ruby
h=Hash.new(0)
gets;a=gets.split.map(&:to_i).each{|e|h[e]+=1}
puts h.select{|k,v|v==1}.map(&:first)
