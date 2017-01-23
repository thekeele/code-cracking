def insertion_sort(array)
  j = 1
  while j < array.length
    key = array[j]
    i = j - 1
    while i >= 0 and array[i] > key
      array[i + 1] = array[i]
      i = i - 1
    end
    array[i + 1] = key
    j = j + 1
  end
end

array = [5, 4, 3, 2, 1]

print "Pre Sort: #{array}\n"
insertion_sort(array)
print "Post Sort: #{array}"
print "\n"


