import numpy as np
lst = [126,158,643,922,620,590,729,931,234,323,842,824,919,327,100,884,228,413,252,376,421,768,226,415,524,719,393,189,495,450,762]

for dig in range(1,4):
    count = np.zeros(10,dtype = int)

    for val in lst:
        count[int((str(val%(10**dig)))[0])]+=1
    
    for c in range(len(count)-1):
        count[c+1] += count[c]

    sorted_lst = np.zeros(len(lst),dtype=int)

    for list_vals_idx in range(len(lst)-1,0-1,-1):
        count[int((str((lst[list_vals_idx])%(10)**dig)[0]))] -=1
        sorted_lst[count[int((str((lst[list_vals_idx])%(10**dig))[0]))]] = lst[list_vals_idx]

    lst = sorted_lst[:]
print(sorted_lst)