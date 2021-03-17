
def max_of_2(x, y):
    if x > y:
        return x
    return y

def max_of_3(x, y, z):
    if max_of_2(x,y)>z:
        return max_of_2(x,y)
    return z

print(max_of_3(1,2,4))