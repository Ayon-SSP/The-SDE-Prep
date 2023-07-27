# 🖇️ Sorting Algorithms
### 💫 All Time⌚ & Space🗑️ Complexity [\[Table\]](#t)
#### ❄️ Bubble Sort [code](#bs)
#### 🕵️ Selection Sort [code](#ss)
#### 🚏 Insertion Sort [code](#is)
#### 🕸️ Merge Sort [code](#ms)
#### ⏱️ Quick Sort [code](#qs)
#### 🦾 Heap Sort [code](#hs)
#### 📊 Count Sort [code](#cs)
#### 🪣 Bucket Sort [code](#bus)
#### 🧮 Radix Sort [code](#rs)
<br>

<a id="t"></a>

## <p aline="center">All Time⌚ & Space🗑️ Complexity</p>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <!-- <title>Table</title> -->
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Ubuntu:wght@500&display=swap" rel="stylesheet">
    <!-- <style>
        table {
            border-collapse: collapse;
            width: 100%;
            font-family: 'Ubuntu', sans-serif;
        }
        th, td {
            text-align: left;
            padding: 8px;
            text-align: center;
        }
        tr:nth-child(even){background-color: #f2f2f2}
        th {
            background-color: rgb(185, 119, 255);
            color: white;
        }
        .redcolors {
            color: red;
        }
    </style> -->
</head>
<body>
    <table border="2" width="100%">
        <tr>
            <th rowspan="2">Algorithem</th>
            <th colspan="3">Time Complexity</th>
            <th rowspan="2">Worst Case space Complexity</th>
        </tr>
        <tr>
            <th>Best</th>
            <th>Average</th>
            <th>Worst</th>
        </tr>
        <tr>
            <td>Bubble Sort</td>
            <td>O(n)</td>
            <td>O(n^2)</td>
            <td>O(n^2)</td>
            <td>O(1)</td>
        </tr>
        <tr>
            <td>Selection Sort</td>
            <td>O(n^2)</td>
            <td>O(n^2)</td>
            <td>O(n^2)</td>
            <td>O(1)</td>
        </tr>
        <tr>
            <td>Insertion Sort</td>
            <td>O(n)</td>
            <td>O(n^2)</td>
            <td>O(n^2)</td>
            <td>O(1)</td>
        </tr>
        <tr>
            <td>Merge Sort</td>
            <td>O(n log n)</td>
            <td>O(n log n)</td>
            <td>O(n log n)</td>
            <td>O(n)</td>
        </tr>
        <tr>
            <td>Quick Sort</td>
            <td>O(n log n)</td>
            <td>O(n log n)</td>
            <td>O(n^2)</td>
            <td>O(n)</td>
        </tr>
        <tr>
            <td>Heap Sort</td>
            <td>O(n log n)</td>
            <td>O(n log n)</td>
            <td>O(n log n)</td>
            <td>O(1)</td>
        </tr>
        <tr>
            <td>Count Sort</td>
            <td>O(n+k)</td>
            <td>O(n+k)</td>
            <td>O(n+k)</td>
            <td>O(k)</td>
        </tr>
        <tr>
            <td>Bucket Sort</td>
            <td>O(n+k)</td>
            <td>O(n+k)</td>
            <td>O(n^2)</td>
            <td>O(n)</td>
        </tr>
        <tr>
            <td>Radix Sort</td>
            <td>O(n*k)</td>
            <td>O(n*k)</td>
            <td>O(n*k)</td>
            <td>O(n+k)</td>
        </tr>
    </table>
</body>
</html>


### If want to take list input
```python
lst = list(map(int,input().split()))
```
<a id="bs"></a>

## ❄️ Bubble Sort

**Bubble Sor**t is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.

<img src="Source\Bubble_sort.gif" alt="" style="border: solid 5px rgb(56, 255, 189); width:300px">

#### Code :
```python
def BubbleSort(lst):
    n = len(lst)
    for i in range(n):
        for j in range(n-i-1):
            if(lst[j]>lst[j+1]):
                lst[j],lst[j+1] = lst[j+1],lst[j]

lst = [6,11,3,7,12,18,5,1]
BubbleSort(lst)
print(lst)
```

<a id="ss"></a>

## 🕵️ Selection Sort

**The selection** sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning.

<img src="Source\Selection-Sort.webp" alt="" style="border: solid 5px rgb(56, 255, 189); width:300px">

#### Code :

```python
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
```

<a id="is"></a>

## 🚏 Insertion Sort
**Insertion sort** is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.

<img src="Source\Insertion-sort.gif" alt="" style="border: solid 5px rgb(56, 255, 189); width:300px">

#### Code :
```python
def InsertionSort(lst):
    n = len(lst)
    for i in range(1,n): # i(1 -> n-1)
        j = i
        while j > 0 and lst[j - 1] > lst[j]:
            lst[j - 1], lst[j] = lst[j], lst[j - 1]
            j -= 1

lst = [6,11,3,7,12,18,5,1]
InsertionSort(lst)
print(lst)
```

<a id="ms"></a>

## 🕸️ Merge Sort

**Merge sort** algorithm that splits the items to be sorted into two groups, recursively sorts each group, and merges them into a final, sorted sequence.

<img src="https://cdn.programiz.com/cdn/farfuture/PRTu8e23Uz212XPrrzN_uqXkVZVY_E0Ta8GZp61-zvw/mtime:1586425911/sites/tutorial2program/files/merge-sort-example_0.png" alt="" style="width: 500px;">

#### Algorithm:

```
step 1: start
step 2: declare array and left, right, mid variable 
step 3: perform merge function.
        mergesort(array,left,right)
        mergesort (array, left, right)
        if left > right
        return
        mid= (left+right)/2
        mergesort(array, left, mid)
        mergesort(array, mid+1, right)
        merge(array, left, mid, right)
step 4: Stop
```
#### Code :
```python
class Solution:
    def merge_two_sorted_lists(self, left: List[int], right: List[int], merged) -> List[int]:
        leftIdx, rightIdx = 0, 0
        while leftIdx < len(left) and rightIdx < len(right):
            if left[leftIdx] < right[rightIdx]:
                merged[leftIdx + rightIdx] = left[leftIdx]
                leftIdx += 1
            else:
                merged[leftIdx + rightIdx] = right[rightIdx]
                rightIdx += 1
        if leftIdx < len(left):
            merged[leftIdx+rightIdx:] = left[leftIdx:]
        elif rightIdx < len(right):
            merged[leftIdx + rightIdx:] = right[rightIdx:]
        return merged

    def sortArray(self, nums: List[int]) -> List[int]:
        n = len(nums)
        if n == 1:
            return nums
        return self.merge_two_sorted_lists(self.sortArray(nums[:n//2]), self.sortArray(nums[n//2:]), nums)

t = Solution()
print(t.merge_two_sorted_lists([1,3,5,6,7],[2,4],[11,2,11,41,5,16,73]))
```
```python
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
```
#### Python Coders Code :

```python
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
```
<a id="qs"></a>

## ⏱️ Quick Sort
**Quick Sort**: Pick an element from the array (the pivot), partition the remaining elements into those greater than and less than this pivot, and recursively sort the partitions. There are many variants of the basic scheme above: to select the pivot, to partition the array, to stop the recursion or switch to another algorithm for small partitions, etc.

<img src="Source\Quicksort.png" alt="" style="border: solid 5px rgb(56, 255, 189); width:300px">

#### Code :
```python
def partion(listToMakePartion):
    j = 0
    p = listToMakePartion[-1]
    for i in range(len(listToMakePartion)):
        if(listToMakePartion[i]<=p):
            listToMakePartion[i],listToMakePartion[j] = listToMakePartion[j],listToMakePartion[i]
            j+=1
    j-=1
    return listToMakePartion,j

def quickSort(lstToSort):
    if(len(lstToSort)<=1):
        return lstToSort
    lstToSort,p = partion(lstToSort)
    left = lstToSort[:p]
    right = lstToSort[p+1:]

    leftSorted = quickSort(left)
    rightSorted = quickSort(right)
    return leftSorted+[lstToSort[p]]+rightSorted
```
```python
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
```
#### Python Coders Code :
```python
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
```

<a id="hs"></a>

## 🦾 Heap Sort
<!-- need to learn Heap -->
#### Code :
```python
```

<a id="cs"></a>

## 📊 Count Sort

**Counting sort** is a sorting algorithm that sorts the elements of an array by counting the number of occurrences of each unique element in the array. The count is stored in an auxiliary array and the sorting is done by mapping the count as an index of the auxiliary array.

#### Code :
```python
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
```



<a id="bus"></a>

## 🪣 Bucket Sort

**Bucket Sort** is a sorting algorithm that divides the unsorted array elements into several groups called buckets. Each bucket is then sorted by using any of the suitable sorting algorithms or recursively applying the same bucket algorithm. Finally, the sorted buckets are combined to form a final sorted array.
#### Code :
```python
# From GFG
def insertionSort(b):
    for i in range(1, len(b)):
        up = b[i]
        j = i - 1
        while j >= 0 and b[j] > up: 
            b[j + 1] = b[j]
            j -= 1
        b[j + 1] = up     
    return b     
              
def bucketSort(x):
    arr = []
    slot_num = 10
            
    for i in range(slot_num):
        arr.append([])
          
    for j in x:
        index_b = int(slot_num * j) 
        arr[index_b].append(j)
      
    for i in range(slot_num):
        arr[i] = insertionSort(arr[i])
          
    k = 0
    for i in range(slot_num):
        for j in range(len(arr[i])):
            x[k] = arr[i][j]
            k += 1
    return x
  

x = [0.897, 0.565, 0.656,
     0.1234, 0.665, 0.3434] 
print("Sorted Array is")
print(bucketSort(x))
```

<a id="rs"></a>

## 🧮 Radix Sort
**Radix sort** is a sorting algorithm that sorts the elements by first grouping the individual digits of the same place value. Then, sort the elements according to their increasing/decreasing order.

<img src="Source\Redox.png" alt="" style="border: solid 5px rgb(56, 255, 189); width:400px">

#### Code :
```python
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
```



<!-- 
## 🧮 
## 🧮 
## 🧮  
-->

<!-- Selection Sort
Recursive Bubble Sort
Recursive Insertion Sort
Iterative Merge Sort
Iterative Quick Sort
Counting Sort

ShellSort
TimSort
Comb Sort
Pigeonhole Sort
Cycle Sort
Cocktail Sort
Strand Sort -->
<br>
<br>
