def product(numbers):
    mult = 1
    for a in numbers:
        mult = mult*a
    return mult
print(product((0, 1, 4, 5, 8)))