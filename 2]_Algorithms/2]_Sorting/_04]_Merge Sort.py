def merge_sort(lst):
    if len(lst) <= 1:
        return lst    
    return merge_two_sorted_lists(merge_sort(lst[:len(lst)//2]), merge_sort(lst[len(lst)//2:]), lst)
    
def merge_two_sorted_lists(left,right,merged):
    left_idx = right_idx = 0
    
    while left_idx<len(left) and right_idx<len(right):
        if(left[left_idx]<=right[right_idx]):
            merged[left_idx + right_idx] = left[left_idx]
            left_idx += 1
        else:
            merged[left_idx + right_idx] = right[right_idx]
            right_idx += 1
    
    if(left_idx<len(left)):
        merged[len(right)+left_idx:len(left)+len(right)] = left[left_idx:len(left)]
        
    if(right_idx<len(right)):
        merged[len(left)+right_idx:len(left)+len(right)] = right[right_idx:len(right)]
        
    return merged

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
        print(" -> ","After : ", merge_sort(lst))

"""
def merge_sort(lst):
    if len(lst) <= 1:
        return

    mid = len(lst)//2

    left = lst[:mid]
    right = lst[mid:]
    merge_sort(left)
    merge_sort(right)
    
    merge_two_sorted_lists(left, right, lst)
    
def merge_two_sorted_lists(a,b,lst):
    len_a = len(a)
    len_b = len(b)

    i = j = k = 0

    while i < len_a and j < len_b:
        if a[i] <= b[j]:
            lst[k] = a[i]
            i+=1
        else:
            lst[k] = b[j]
            j+=1
        k+=1

    while i < len_a:
        lst[k] = a[i]
        i+=1
        k+=1

    while j < len_b:
        lst[k] = b[j]
        j+=1
        k+=1

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
        print("Before : ",lst,end="  ->  ")
        merge_sort(lst)
        print("After : ",lst)
"""
