# Conditional Execution

Also known as branching

- if something is true
    - run some code
- else (optional)
    - run some other piece of code


# The if statement

if <expression evaluates to True>:
    indented lines tells Python that all these lines should be executed if the conditon is True
    code line 1
    code line 2
    ...

- exit the code block by unindenting

```python
price = 200
if price < 250
    make purchase
```

The else clause

- often in consitional execution

if something is True
    do something
otherwise
    do something else


```python
if <expression> is True:
    [code block 1]
else:
    [code block 2]
```

Example 

```python
price = 200

if price < 250:
    print('The price is right')
else:
    print('Too pricey!')
print('Done')

price = 300

if price < 250:
    print('The price is right')
else:
    print('Too pricey!')
print('Done')
```

Nested if statements 

```python
if price < 1000:
    if price < 500:
        volume = 50
    else:
        volume = 10
    make_purchase(volume)
else:
    print('Too pricey!')
```

Nest the else block

```python
if price < 1000:
    make_purchase()
else:
    if price < 2000:
        contact_vendor()
    else:
        find_new_vendor()
```

## elif Clause

Instead of nested structure, Python provides the elif clause

- equivalent to a nested else-if
- does not require double indentation
- easier to read

```python
# all blocks are mutually exclusive

if grade >= 90:
    letter_grade = 'A'
elif grade >= 80:
    letter_grade = 'B'
elif grade >= 70:
    letter_grade = 'C'
elif grade >= 60:
    letter_grade = 'D'
else:
    letter_grade = 'F'
```

## Ternary conditional opertor

ternary operator takes 3 operands

  - the conditional expression
  - the value to return if the expression is True
  - the value to return if the expression is False

value1 if <conditonal exp> else value2

```python
if price < 100:
    volume = 10
else:
    volume = 1

# using ternary operation

volume = 10 if price < 100 else 1

# <exp1> if <condition> else <exp2>

var = (a -b) if a > b else (b - a)
```

Short-circuiting

<exp1> if <condition> else <exp2>

- first evaluates <conditon>
- if it is True, evaluates and return <exp1>
    - but does not evaluate <exp2>
- if it is False, it will evaluate and return<exp2>
    - but does not evaluate <exp1>

```python
a = 10
b = 5

result = a / b if b != 0 else 'NaN'    
```

