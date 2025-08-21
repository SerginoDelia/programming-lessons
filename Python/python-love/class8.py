# # Scopes: Local and Global

# # name = 'John'

# # def say_hello(name):
# #     print('Hello ' + name)

# # say_hello(name)

# name = 'John' # global scope variable

# def say_hello():
#     my_name = 'Smith'
#     print(my_name, name)



# def well_howdy(who):
#     greeting = 'Howdy'
#     print(f'{greeting}, {who}')

# well_howdy('Angie')
# # print(greeting)

def scope_test():
    if False:
        foo = 'Hello'
    else:
        bar = 'Goodbye'

    # print(foo)
    print(bar)

scope_test()


# waterfall1 = 'Waterfall1'

# def water():
