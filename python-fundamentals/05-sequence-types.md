# Sequence Types

Sequences are ordered collection of objects, starts at 0, last item is n-1

- first element
    - second element
        - nth element

- homogeneous sequence types
    - can only contain objects that are all the same type

- heterogeneous sequence types
    - may contain object that ar of different types

lists
- mutable heterogeneous types

tuples
- immutable heterogeneous

strings
- immutable homegeneous

## List 

- list type
    - container type
        - coontains elements
    - sequence type
        - ordered sequentially
        - indexed
    - can be heterogeneous
    - mutable
        - add, replace, or remove elements
    - has unbounded growth
    - lists are objects
        - they have state and functionality

list literal

```python
[10, 20, 30 40]

[10, 3.14, True]

l = [10, 20, 30, 40, 50]

l[0]

len(l)

len([True, False])
```

Empty list
- sometimes we want to start with an empty list
    - and have code that adds to the list as our program runs

```python
l = []
len(l)

```

Replace list element

- we can replace an element at index i with a different element

```python

l = [10, 20, 30, 40, 50]

l[2] = True
```

## Tuples

Very similar to lists

- immutable container type
    - once created, you cannot add or remove elements
    - cannot replace elements

tuple Literals

```python
t = (10, 20, 30, 40)

# just like lists, they can contain any object

(10, 20, (True, False), [100, 200])

# we can also write it without the parenthesis

t = 10, 20, 30

(1, [True, False], (3, 4))

# we can omit the parenthesis on the outer tuple
1, [True, False], (3, 4)
```

Indexing, Length

- same as lists
- we cannot replace an element of a tuple

- the container is immutable
    - does not mean elements in the container are immutable

```python
t = 10, 20 [True, True]

t[2] = 100 # -> TypeError

t[2][1] = False # 10, 20 [True, False]

```

