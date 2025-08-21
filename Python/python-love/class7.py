# Functions - think of fucntions as wrappers or a program withibn your program
import operator

def function_name(name):
    print(name)

name1 = 'John'

function_name(name1)

name2 = 'Smith'
function_name(name2)

function_name('Anderson')

def fizz_buzz(number):
    # if number is divisible by 3 and 5 print 'FizzBuzz'
    if number % 3 == 0 and number % 5 == 0:
        print('FizzBuzz')
    elif number % 3 == 0:
        print('Fizz')
    elif number % 5 == 0:
        print('Buzz')
    else:
        print(f'{number} is not divisible by 3 or 5')

fizz_buzz(15)

my_num = int(input('Enter a number: ')) # method chaining


fizz_buzz(my_num)

# answer = input('Would you like to continue: \'Yes\' or \'y\' to continue: ')
# while answer.lower() == 'yes' or answer.lower() == 'y':
#     number = int(input('Enter a number: '))
#     fizz_buzz(number)
#     answer = input('Would you like to continue: Yes or No: ')


def calculator():
    num1 = int(input('Enter the first number: '))
    num2 = int(input('Enter the second number: '))
    operator = input('Would you like to "+, -, *, /": ')
    if operator == '+':
        return num1 + num2
    elif operator == '-':
        return num1 - num2
    elif operator == '*':
        return  num1 * num2
    elif operator == '/':
        return num1 / num2

# print(calculator())

# min and max
my_list = [5, 27, 2, 8, 4, 78, 63]
# print(min(my_list))
# print(max(my_list))

# write a custom funtion to find the lowest and the highest number
# sort the list
# find minimum
# less than, greater than - if the current number is less than the next number, keep the current number
# if the current number is greater than the next number change current number to next number
# cycle/iterate/loop througth the numbers

lowest_number = my_list[0]

for num in my_list:
    if lowest_number > num:
        lowest_number = num

    # if lowest_number < num:
    #     continue
    # else:
    #     lowest_number = num

print(f'Lowest number: {lowest_number}')



def highest_number(list1):
    highest_number = my_list[0]

    for num in my_list:
        if highest_number < num:
            highest_number = num
    return (f'The highest number is {highest_number}')

print(highest_number(my_list))


# Lambdas - Anonymous/unnamed Function

x = 5
y = 2
my_lambda = lambda x, y: x + y
print(my_lambda(x, y))

a = lambda x, y: x + y
r = a(2, 3)

def a(x, y):
    return x + y


words = ['John', 'Smith', 'Trump', 'Sunday', 'Amy']
# Sort a list of words by the number of unique letters
result = sorted(words, key=lambda word: len(set(word)))
print(result)
