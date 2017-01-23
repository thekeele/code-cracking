def merge(left, right)
  sorted = []
  until left.empty? or right.empty?
    if left.first <= right.first
      sorted << left.shift
    else
      sorted << right.shift
    end
  end
  sorted.concat(left).concat(right)
end

def merge_sort(array)
  return array if array.size <= 1
  mid   = array.size / 2
  left  = array[0, mid]
  right = array[mid, array.size]
  merge(merge_sort(left), merge_sort(right))
end

array = [5, 4, 3, 2, 1]

print "Pre Sort: #{array}\n"
array = merge_sort(array)
print "Post Sort: #{array}"
print "\n"
