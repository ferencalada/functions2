
def num_pares(list):
    listpar = []
    for n in list:
        if n % 2 == 0:
            listpar.append(n)
    return listpar
print(num_pares([2,3,4,5,6]))

