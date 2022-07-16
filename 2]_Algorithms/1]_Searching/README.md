# 🐧Searching Algorithms


### 💫 All Time⌚ & Space🗑️ Complexity [\[Table\]](#t)
#### 🎉 Linear Search [code](#ls)
#### 🎊 Binary Search [code](#bs)

<img src="Source\binary-search-sequence-search.gif" alt="" style=" width:300px">

### If want to take list input
```python
lst = list(map(int,input().split()))
```


<a id="ls"></a>

## 🎉 Linear Search

**Linear search** is the simplest method of searching a data set. Starting at the beginning of the data set, each item of data is examined until a match is made. Once the item is found, the search ends. If there is no match, the algorithm must deal with this.


#### Code :
```python
def LinearSearch(lst,toSearch):
    for i in range(len(lst)):
        if(toSearch==lst[i]):
            idx = i
        
    return idx
lst = [0,1,2,3,4,5,6,7,8]
print(LinearSearch(lst,6))
```


<a id="bs"></a>
## 🎊 Binary Search

**Binary Search** is a searching algorithm for finding an element's position in a sorted array. In this approach, the element is always searched in the middle of a portion of an array. Binary search can be implemented only on a sorted list of items. If the elements are not sorted already, we need to sort them first.

#### Code :
```python
def BinarySearch(lst,toSearch):
    l = 0
    r = len(lst)-1
    while(l<=r):
        mid = (r+l)//2
        if(lst[mid]==toSearch):
            return mid
        elif(lst[mid]<toSearch):
            l = mid+1
        else:
            r = mid-1
              
    return "Not found"
lst = [0,1,2,3,4,5,6,7,8]
print(BinarySearch(lst,6))
```



<br>
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
            <td>Linear Search</td>
            <td>O(1)</td>
            <td>O(n)</td>
            <td>O(n)</td>
            <td>O(1)</td>
        </tr>
        <tr>
            <td>Binary Search</td>
            <td>O(1)</td>
            <td>O(n log n)</td>
            <td>O(n log n)</td>
            <td>O(1)</td>
        </tr>
    </table>
</body>
</html>