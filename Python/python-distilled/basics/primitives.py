# A variable is the name that refers to a value, a value represent an object of some type

x = 42

# type attached to a name
x: int = 42

# an expression is a combination of primitives, names, and operators that produces a value
2 + 3 * 4

# the following program uses variables and expressions to perform a compount interest calculation

principal = 1000  # initial amount
rate = 0.05       # interest rate
numyears = 5      # number of years
year = 1

while year <= numyears:
  principal = principal * (1 + rate)
  print(year, principal)
  print(f'{year:>3d} {principal:0.2f}') # '>3d' means 3 digit number, `0.2f' means floating point with 2 decimal places of accuracy
  year += 1

# the while statement test the conditional expression that immediately follows
# if the condition is true, the body of the while statement executes. The condition
# is retested again until the condition becomes false

# In the f-string, variable names and expressions can be evaluated by enclosing
# them in curly braces

# Arithmetic operations

x = 5
y = 10

x + y
x - y
x * y
x / y
x // y # truncating division
x ** y
y % x
-x # unary minus
+x # unary plus

# Common Math Functions

# abs(x)                # absolute value
# divmod(x, y)          # returns (x // y, x % y)
# pow(x, y [,modulo])   # returns (x ** y) % modulo
# round(x, [n])         # rounds to the nearest multiple of 10 to the nth power

# Bit manipulation
a = 0b11001001
mask = 0b11110000
x = (a & mask) >> 4 # x = 0b1100 (12)

# Comparison Operators (results in boolean True or False)

x == y
x != y
x < y
x > y
x >= y
x <= y

# Logical Operators

x or y    # if x is false, return y; otherwise, return x
x and y   # if x is false, return x; otherwise, return y
not x     # if x is false, return True, otherwise, return False

n = 6

x = x + 1
y = y * n
y *= n







































