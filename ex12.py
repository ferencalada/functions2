
def check_palindrome(string):
    c = 0
    s=len(string)-1
    for j in string:
        if not j == string[s]:
            c=c+1
        s=s-1
    if c==0:
        print("this is a palindrome")
    else:
        print("this is not a palindrome")
print(check_palindrome("elile"))
