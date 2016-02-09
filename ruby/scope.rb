# global var
parent = "I'm the parent scope"

# function definition
def function_scope
  # local var
  child = "I'm the child scope"
  # puts parent # undefined local variable or method `parent'
  puts child
end

# function call
function_scope

# global print
puts parent
# puts child # undefined local variable or method `child'

# global array
stuff = ['all', 'my', 'junk']

# block to enumerate an array
stuff.each do |item|
  puts item
  puts parent
  # puts child # undefined local variable or method `child'
end

# puts item # undefined local variable or method `item'
