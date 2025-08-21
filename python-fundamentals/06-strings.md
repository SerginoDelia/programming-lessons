## Strings

The str type

strings are sequence types
- but they are more generalized than generic sequences
    - they are homogeneous
    - each element is a single character

Unicode
- focused on assigning a code to a character 
    - UTF-8 - (unicode transformation format)
    - UTF-16
    - UTF-32

Decimals uses powers of 10 (0-9)
Binary uses powers of 2 (0-1)
Hexadecimal uses 16 (0-9, A-F)

```py
# ord() --> returns the code point for a single character (in decimal)
ord('A') # 65

hex() # converts a decimal to a string
hex(65)
```

Case conversions

String methods are called using dot notation

- Strings are immutable, these methods return a new string they never modify the string


```python
my_string.method()

# Case mappings
lower() # hello 'world'.lower()
upper() # make everything uppercase
title() # Capitalize the first letter of every word
casefold() # used for caseless comparisons

s1 = 'hello'
s2 = 'HellO'

# Used for caseless comparison

s1.casefold() == s2.casefold()

# stripping

.lstrip()
.rstrip()
.strip() # strip white space on both ends of the string

# we can specify what characters we want to strip
.strip(' ')
.lstrip('abc') # strip the characters abc from the left

# conccatenate

'hello' + 'world'

# split, useful for parsing data
data = '100, 200, 300, 400'

data.split(',') # returns a list of strings
[' 100', ' 200', ' 300', ' 400']

join strings
data = ('ab', 'cd', 'ef')

--.join(data) # join the strings with -- in between

','.join(['10', '20', '30']) # '10, 20, 30'

'='.join('python')

# finding substrings

use in operator # tests for containment

'x' in 'xyz' # True

# startwith
# endwith

'python'.startswith('py') # True

'python'.endswith('on') # true

# Finding the index

data = 'this is a correct sentence'

data.index('correct') # the index of the start of the word

.find # returns a -1 if the index is not found

data.find('now')
```
