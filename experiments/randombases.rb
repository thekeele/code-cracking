set = "XXYXZZ".downcase
puts "set: #{set}"
chars = set.split("")

X = 0
Y = 0
Z = 0
freq = {:'x' => X, :'y' => Y, :'z' => Z}

chars.each do |char|
  if char == 'x'
    freq[:x] = freq[:x] + 1
  elsif char == 'y'
    freq[:y] = freq[:y] + 1
  elsif char == 'z'
    freq[:z] = freq[:z] + 1
  else
    puts 'Not measurable'
  end
end

puts "freq: #{freq}"

