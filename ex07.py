def letters(string):
    uppercase=0
    lowercase=0
    for a in string:
        if (a>='A' and a<='Z'):
            uppercase=uppercase+1
        if (a>='a' and a<='z'):
            lowercase=lowercase+1
    print('upper case= ',uppercase)
    print ('lower case= ',lowercase)
print(letters("While Resting"))