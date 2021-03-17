def unique_elements(list):
    mylist=[]
    for a in list:
        if a not in mylist:
            mylist.append(a)
    return mylist
print(unique_elements([1,2,3,4,2,5,3,3,1,6]))