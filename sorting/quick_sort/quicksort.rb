## Quicksort
# Worse-case running time: O(n^2)
# Expected running time: O(n log n)
# Sorts in-place
# Constants in O(n log n) are small
# Generally faster than merge sort since in-place sorting (if subarrays are balanced)
# Can be as slow as insertion sort if subarrays are unbalanced
##
# Divide: Partition array into two subarrays:
#   1.) p -> q - 1
#   2.) q + 1 -> r
#  Each element in 1 is <= A[q]
#  Each element in 2 is >= A[q]
#  q acts as the pivot point
# Conquer: sort the two subarrays by recursively calling quicksort
# Combine: no work since in-place sort
##

# Standard Swap
#  tmp = x
#  x = y
#  y = tmp
# Ruby Swap
#  x, y = y, x

def partition(array, p, r)
  x = array[r]
  i = p - 1
  j = p

  while j < r
    if array[j] <= x
      i = i + 1
      array[i], array[j] = array[j], array[i]
    end
    j = j + 1
  end

  array[i + 1], array[r] = array[r], array[i + 1]

  return (i + 1)
end

def quicksort(array, p, r)
  if p < r
    q = partition(array, p, r)
    quicksort(array, p, q - 1)
    quicksort(array, q + 1, r)
  end
end

array = [5, 4, 3, 2, 1]
n = array.length

print "Pre-Sort: #{array}\n"
quicksort(array, 0, n - 1)
print "Post-Sort: #{array}"
puts "\n"

