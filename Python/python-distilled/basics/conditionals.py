# Conditionals and Control Flow

# the while, if and else statement are used for looping and conditional code execution

a = 10
b = 7

if a < b:
  print('Computer says Yes')
else:
  print('Computer says No')

# The bodies of the if and else statements are denoted by indentation, the else 
# clause is optional. To create an empty clause, use the pass statement

if a < b:
  pass # do nothing
else:
  print('Computer says No')

# Use elif to handle multiple test cases

suffix = '.htm'
content = ''

if suffix == '.htm':
  content = 'text/html'
elif suffix == '.jpg':
  content = 'image/jpeg'
elif suffix == '.png':
  content = 'image/png'
else:
  raise RuntimeError(f'Unknown content type {suffix!r}')

# if you are assigning a value in combination with a test, use a conditonal expression

a = 7
b = 9
maxval = a if a > b else b

# this is the same as the longer

if a > b:
  maxval = a
else:
  maxval = b

# assignment of a variable and a conditional combined together using the := operator
# ':=' the walrus operator

x = 0
while (x := x + 1) < 10: # Prints 1, 2, 3, ..., 9
  print(x)

# the parenthesis used to surround an assignment expression are always required

# the break statement can be used to abort a loop early, it only applies to the innermost loop

x = 0
while x < 10:
  if x == 5:
    break # Stops the loop and move to Done below
    print(x)
    x += 1

print('Done')

# the continue statement skips the rest of the loop body and goes back to the top of the loop

x = 0
while x < 10:
  x += 1
  if x == 5:
    continue # skips the print(x), and goes back to the start of the loop
  print(x)

print('Done')

























