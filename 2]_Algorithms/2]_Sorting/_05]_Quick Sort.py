"""
def partition(lst,l,r):
    pi = lst[r]
    j = l
    for i in range(l,r):
        if(lst[i]<=pi):
            lst[i],lst[j] = lst[j],lst[i]
            j+=1
    lst[j],lst[r] = lst[r],lst[j]

    return j

def quick_sort(lst,l,r):
    if(l<r):
        pi = partition(lst,l,r)

        quick_sort(lst,l,pi-1)
        quick_sort(lst,pi+1,r)
    return lst

if __name__ == '__main__':
    test_cases = [
        [],
        [3],
        [9, 8, 7, 2],
        [3, 4, 1, 2, 5],
        [6, 5, 12, 10, 9, 1],
        [9, 8, 7, 6, 5, 4, 3, 2, 1, 0],
        [10, 3, 15, 7, 8, 23, 98, 29]
    ]

    for lst in test_cases:
        print("Before : ",lst,end=" ")
        print(" -> ","After : ", quick_sort(lst,0,len(lst)-1))
"""

def quick_sort(lst):
    if(len(lst)<=1):
        return lst
    
    pi = lst[len(lst)-1]
    less = [i for i in lst[:len(lst)-1] if(i<=pi)]
    greater = [i for i in lst[:len(lst)-1] if(i>pi)]
    
    return quick_sort(less) + [pi] + quick_sort(greater)

if __name__ == '__main__':
    test_cases = [
        [],
        [3],
        [9, 8, 7, 2],
        [3, 4, 1, 2, 5],
        [6, 5, 12, 10, 9, 1],
        [9, 8, 7, 6, 5, 4, 3, 2, 1, 0],
        [10, 3, 15, 7, 8, 23, 98, 29]
    ]

    for lst in test_cases:
        print("Before : ",lst,end=" ")
        print(" -> ","After : ", quick_sort(lst))