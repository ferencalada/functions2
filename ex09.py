def check_if_prime (number):
    count=0
    j=number
    while j>=1:
        if (number % j==0):
            count=count+1
        j=j-1
    if count<=2:
        print("the number is prime")
    else:
        print("the number is not prime")
print(check_if_prime(997))