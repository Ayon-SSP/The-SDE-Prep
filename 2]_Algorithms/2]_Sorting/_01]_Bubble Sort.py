def BubbleSort(lst):
    n = len(lst)
    for i in range(n):
        for j in range(n-i-1):
            if(lst[j]>lst[j+1]):
                lst[j],lst[j+1] = lst[j+1],lst[j]

lst = [6,11,3,7,12,18,5,1]
BubbleSort(lst)
print(lst)