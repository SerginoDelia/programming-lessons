/*
Bitwise Operators
& and
    similar to logical &&
| or
    similar to logical ||
^ X-OR
    if bit1 is 1 and bit2 is 0 --> the other bit is 1
    if bit1 is 0 and bit2 is 0 --> then the other bit is 0
    if bit1 is 0 and bit2 is 1 --> then the other bit is 1
    if bit1 is 1 and bit2 is 1 --> then the other bit is 0
~ not
    works similar to the not operator in Python
<< leftshift
>> rightshift

int x = 11, y = 5, z;
    AND operation
    x in binary form 00001011
    y in binary form 00000101
    z = x + y
    z in binary form 00000001 = 1

    int x = 11, y = 7, z;
    OR operation
    x in binary form 00001011
    y in binary form 00000111
    z = x + y
    z in binary form 00001111 = 15

    int x = 11, y = 7, z;
    X-OR operation
    x in binary form 00001011
    y in binary form 00000111
    z = x + y
    z in binary form 00001100 = 12
                         8421   

    char x = 5, y;
    ~ NOT - every binary bit will change its state
    x in binary form 00000101
    y = ~x
    y in binary form 11111010 - the number is not negative

    get the value of negative number in decimal form
    11111010 = -6
    00000110 --> add one to the last number --> 6

    int x = 5, y;
    << Left shift
    x in binary form 00000101
    y = x << 1 all the bits are shifted
    y in binary form 00001010
    y = 8 + 2 --> 10

    << 2 --> if you move them by 2 space it will get multiplied by 4

    >> divided by 2 over i --> x/4
*/