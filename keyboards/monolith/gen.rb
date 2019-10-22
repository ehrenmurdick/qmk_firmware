
(0..3).each do |y|
  (0..11).each do |x|
    print %Q{{"x": #{x}, "y": #{y}},}
  end
end
