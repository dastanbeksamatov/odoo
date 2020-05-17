# Python 3.8
def count(strings):
  result = 0
  for i in strings:
    try:
      value = int(i)
      result+=value
    except ValueError:
      pass
  
  return result
  
# Recursive version of the above function
def recursiveCount(strings):
  if(len(strings)==0):
    return 0;
  for val in strings:  
    try:
      value = int(val)
      strings.remove(val)
      return value + recursiveCount(strings)
    except ValueError:
      strings.remove(val)
      return recursiveCount(strings)

strings = ['a', '123', 'home', 'cool', '234', '121', '432d32', 'dasta', 'd1', '1a', '523']

print(count(strings))

print(recursiveCount(strings))