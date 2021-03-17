def divisors(num):
    listd = []
    for i in range(1,num):
        if num%i==0:
            listd.append(i)
    sum=0
    for w in listd:
        sum=w+sum
    if sum==num:
        print("the number is perfect")
    else:
        print("the number is not perfect")
print(divisors(6))
