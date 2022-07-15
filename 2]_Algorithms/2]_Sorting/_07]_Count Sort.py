import numpy as np

lst = [6,8,3,4,9,1,4,3,4,9,7,4,8,3,6,1,8,6,5,4,9,3,9,5]
count = np.zeros(9,dtype = int)
for val in lst:
    count[val-1]+=1

for c in range(len(count)-1):
    count[c+1] += count[c]

sorted_lst = np.zeros(len(lst),dtype=int)

for list_vals_idx in range(len(lst)):
    count[lst[list_vals_idx]-1] -=1
    sorted_lst[count[lst[list_vals_idx]-1]] = lst[list_vals_idx]

print(sorted_lst)