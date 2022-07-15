def SelectionSort(lst):
    n = len(lst)
    for i in range(n-1):
        min_idx = i
        for j in range(i+1,n):
            if(lst[j]<lst[min_idx]):
                min_idx = j
        lst[i],lst[min_idx] = lst[min_idx],lst[i]

lst = [6,11,3,7,12,18,5,1]
SelectionSort(lst)
print(lst)