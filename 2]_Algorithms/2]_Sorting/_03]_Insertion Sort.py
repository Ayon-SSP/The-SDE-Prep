def InsertionSort(lst):
    n = len(lst)
    for i in range(1,n): # i(1 -> n-1)
        for j in range(i-1,-1,-1): # j(i -> 0)
            if(lst[j]>lst[j+1]):
                lst[j],lst[j + 1] = lst[j + 1],lst[j]
            else:
                break

lst = [6,11,3,7,12,18,5,1]
InsertionSort(lst)
print(lst)