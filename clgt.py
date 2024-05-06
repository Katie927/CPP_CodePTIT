n0 = 0
n1 = 1
n2 = n0 + n1
col = 2
print(str(n0) + " " + str(n1) + " " , end = '')
while n2 < 1000:
    n2 = n0 + n1
    n0 = n1
    n1 = n2
    if n2 < 1000:
        print( str(n2) + " ", end = '')
    col= col + 1
    if(col == 10):
        print("")
        col = 0
