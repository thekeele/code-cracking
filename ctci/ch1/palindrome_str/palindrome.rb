str1 = 'aibohphobia'  # fear of palindromes
#str1 = 'determinism'  # seriously bro
#str1 = 'a' # all strings of length 1 are palindromes
str2 = str1.reverse

def palindrome(str1, str2)
  if str1.length == 1
    return 'palindrome'
  end
  
  for i in 0..str1.length - 1
    if str1[i] != str2[i]
      return 'not palindrome'
    end
  end

  return 'palindrome'
end

puts palindrome(str1, str2)
