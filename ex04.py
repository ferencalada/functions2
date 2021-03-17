def reverse_string(string):
    length = len(string)
    for a in string:
        print(string[(length-1)])
        length=(length-1)
print(reverse_string("this is a string"))