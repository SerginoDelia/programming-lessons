# Basic Data Types

int
float

## Objects

What are objects?
- entities created by Python
    - encapsulation
        - they have state
        - they have methods (functionality)
- they are often used to represent real world things
    - Car
        - State (data)
            - brand -> Toyota
            - model -> Prius LE
            - #doors -> 4
            - model_year -> 2024
            - odometer -> 5_400
        - Functionality
            - accelerate()
            - brake()
            - set_cruise_control()
            - left_turn_signal_on()

## Integers are Objects

- an int is an objects
    - it has state - the value of the integer
    - but also has functionality
        - knows how to add itself to another integer
        - `(10).__add__(100) -> 110`
            - an integer has the method __add__ used to implement addition
        - knows how to represent itself as a string (e.g for visual output)

## Floats are Objects

- state -> value
- functionality -> __add__
- other functionalities too, for example:
- `(0.125).as_integer_ratio() -> 1, 8`

## Everything in Python is an object

- any data type we have in Python is actually an object
    - attributes
        - it has state
        - it has functionality

    - attributes encompass state and functionality
        - some attributes are for state
        - some attributes are for functionality

## Dot Notation

- we use dot notation to access attributes
- `car.brand` - accesses the brand attribute of the car object
- `car.model`

- for attributes that represent functionality, we usually have to call the attribute to perform the action
    - often supplying additonal parameters
        - callable attributes (represents functionality)
            - `car.accelerate(10, 'mph')` 
            - `(10).__add__(100)` 

## Mutability and Immutability

- an object is mutable if its internal state can be changed
    - one or more data attributes can be changed
        - lists
        - dictionaries
        - sets

- an object is immutable if its internal state cannot be changed
    - the state is "set in stone"
        - integers
        - floats
        - booleans
        - strings
        - ...

## Variables

- naming objects
- we assign labels to an object using the assignment operator =
- we're slapping a label on an object

- `a = 100` a is referencing the object 100 

### How Variable Assignment Happens

`apy = 0.25`

- Python evaluates the RHS (right hand side) first
    - then it assigns that result to the symbol in the LHS (left hand side)
        - the LHS becomes a named reference to whatever result from the RHS

- Using Variables
    - once a variable has been created it can be used elsewhere in the program

```python
pi = 3.1415
radius = 1
circ = 2 * pi * radius # 6.283
```

`circ` is now a reference to the float `6.283`

### Variable Naming

- case sensitive
- Must Follow Rules
    - start with underscore or a letter (a-z A-Z)
        - followed by any number of underscores or letters, or digits (0-9)

```python
var
my_var
index1
index_1
_var
__var
__add__ # reserved by Python don't use this convention

# cannot be reserved words
 
True
False
if
def
and
or
```

- Should-follow conventions
    - PEP 8 Style Guide --> typical convention followed by most Python devs

- terminology
    - camel case 
        - seperate words are distinguished by upper case letters
        `accountBalance bankAccount`
        
    - snake case
        - seperate words are distinguished by underscores
        - we typically use snake case in Python
        `account_balance bank_account`

    - for standard variables
        - snake case
        - all lower case letters
        `account_balance`

## Arithmetic Operators

A operator is a programming language symbol that performs some operation on one or more values

- Certain types of operators include
    - arithmetic operators
    - comparison (or relational) operators
    - logical operators

- the values an operator acts on are called the operands
- unary operator - requires a single operand
    - Unary Minus -10
    - Unary Plus +10
- binary operator - requires 2 operand
    - + additon
    - - substraction
    - * multiplication
    - / division
    - ** power (exponention)
    - we can also use parenthesis to group expressions
- Operand Types
    - arithmetic operators can act on any numerical type
        - int float
        - as well as other types
        - what the operator does is actually determined by the type of the operands
        - an operator may support mixed operand types
            - `2 + 2` --> returns an int
            - `2 + 2.0` --> returns a float
            - `5.5 * 2` --> returna a float
            - `4 / 2` --> returns a float
- The Power Operator
    - `2 ** 4` --> `2 * 2* 2* 2` --> 16 (int)
    - `2 ** (-4)`
        - `1 / (2 ** 4)` --> 1/16 --> 0.0625 (float)

- How Python Implement Arithmetic Operators
    - numbers are actually objects
        - they have state
        - they also have functionality
        - one of these is the __add__ method
        - when we do `a + b` where `a = 10` and `b = 20`
            - 10 is an int object that implements the __add__ method
            - Python actually does this to evaluate the expression:
                - a.__add__(b)

## Operator Precedence

- PEMDAS
- Operators have precedence
    - an operator with higher precendence will bind more tightly
    - fancy way of saying it will be evaluated first
    - precedence order with arithmetic operators
        - lowerst to highest
            - binary + -
            - * /
            - unary+ -
            - **  (except when the unary opertor is to the right of the **)
            - `-2 ** 4` --> `-(2 ** 4)` --> -16
            - except when the unary operator is to the right of **
            - `2 ** -3` --> `2 ** (-3)` --> 0.125
    - use parenthesis - to not rely of operator precedence

## Integer Division  and Modulus

- // - Python integer division

- 121 // 3 = 43

- % - Modulo remainder operation

- `a // b` calculates the integer portion of `a / b`
- `a // b` is the floor of `a / b`
    - `floor(-3.14)` -> -4
    - `floor(3.14)` -> 3

## Comparison Operators

- also know as relational operators
    - compares two things and yield a boolean (bool) result
        - == equlality comparison
        - != not equal
        - <,<=,>,>= assumes operands are comparable
        - int and float types are comparable to each other
        - 10 <= 10.9 True
        - 5 == 5 True
        - 0.1 + 0.1 + 0.1 == 0.3 False

Identity vs Value Equality
- To see if 2 objects are thje same object -> is
    - is operator is purely concerned with the memory address (identity) of the objects
        - is (is called the identity comparison operator)
- to see if two (compatible) objects are equal in value (in some sense) -> ==
    - == Python uses the __eq__ method
    - a == b -> a.__eq__(b)

    - in most cases ==
    - a = 1
    - b = 1.0
    - c = 1
    - d = 500
    - e = 500

    - a == b -> True
    - a is b -> False (not the same object)
    - c is c -> True
    - a is c -> True (same object, because the value is small)
    - d == e -> True
    - d is e -> False (different object)

Other comparison operators

- membership operators: 
    - works with collection types, they determine membership in some collection
    - in
        - uses equality to check if something is in the collection
    - not in
    - `s = {1, 2, 3.14, True, 5.1}`
    - `1 in s` -> True
    - `10 in s` -> False
    - `10 not in s` -> True

## Boolean Operators

- Boolean values
    - True or False
    - not 
        - reverse the value
    - and 
        - a and b is True if and only if both a and b are True
    - or
        - a or b is False if and only if both a and b are False
        - True otherwise

- Short-Circuited evaluation
    