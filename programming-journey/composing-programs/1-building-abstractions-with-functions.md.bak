# Building Abstractions with Functions

```python
from urllib.request import urlopen
```

an import statement that loads functionality for accession data over the internet
it makes the function `urlopen` available

Statements and Expressions
- Python code consists of expressions and statements. Broadly computer programs consists of instructions to either
    1. compute some value
    2. carry out some action

- statements
    - typically describe actions
- expressions
    - typically describe computations

```python
shakespeare = urlopen('http://composingprograms.com/shakespeare.txt')
```

Functions
- encapsulated logic that manipulates data
    - urlopen is a function

```python
words = set(shakespeare.read().decode.split())
```

Objects
- seamlessly bundles together data and the logic that manipulates the data

```python
{w for w in words if len(w) == 6 and w[::-1] in words}
# {'redder', 'drawer', 'reward', 'diaper', 'repaid'}
```

A compound expression that evaluates to the set of all Shakespeare word that are simultaneously a word spelled in reverse
- `w[::-1]`
    - enumerates each letter in a word, but the -1 dictates to step backward

## Elements of Programming

- primitive expressions and statements
    - represents the simplest building blocks that the language provides
- means of combination
    - by which compound elements are built from simpler ones
- means of abstraction
    - compound elements can be named and manipulated as units

### Expressions

```python
42
1/2 + 1/4
```

### Call Expressions

applies a function to some arguments

```python
max(7.5, 9.5)

# max - operator
# 7.5 - operand
# 9.5 - operand
```

The operator specifies a function

```python
pow(100, 2)

pow(2, 100)

max(1, -2, 3, -4)

max(min(1, -2), min(pow(3, 5), -4)) # -2
```

### Importing Library Functions

an import statement designates a module name (e.g. operator or math), and then lists the named attributes
of that module to import (e.g. sqrt). Once a function is imported it can be called multiple times

```python
from math import sqrt
sqrt(256)
```

the operator module provides access to functions corresponding to the infix operator

```python
from operator import add, sul mul

add(14, 28)
sub(100, mul(7, add(8, 4)))
```

## Names and Environment

If a value has been given a name, we say that the name binds to the value, we can establish binding
using the assignment statement

```python
radius = 10

2 * radius
```

Names are also bound via import statements

```python
from math import pi
pi * 71 / 223
```

- = is called the assignment operator
    - assignment is our simplest means of abstraction, it allows us to use names to refer to the results of compound operations

```python
max

# we can use assignment statements to give new names to existing functions

f = max
f
f(2, 3, 4)

# and successive assignment statements can rebind a name to a new value
f = 2
f

# names are called variables because they can be bound to different values

max = 5

# after assigning max to 5, the name max is no longer bound to a function, attempting to call max(2, 3, 4) will
# cause an error
```

When executing an assignment statement, Python evaluates the expression to the right of =
before changing the binding to the name on the left