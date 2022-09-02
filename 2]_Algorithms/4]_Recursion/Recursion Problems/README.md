# ♻️ Recursion & Backtracking Problems


<img src="source\rb.jpg" alt="">

### ➡️ Print Decreasing using Recursion
```python
def printDecreasing(n):
    if(n==0):
        return
    print(n,end=" ")
    printDecreasing(n-1)

printDecreasing(5)
```
```
5 4 3 2 1
```


### ➡️ Print Increasing using Recursion 
```python
def printIncreasing(n):
    if(n==0):
        return
    printIncreasing(n-1)
    print(n, end=" ")

printIncreasing(5)
```
```
1 2 3 4 5 
```
### ➡️ Print Decreasing Increasing Numbers using Recursion
```python
def printIncreasing(n):
    if(n==0):
        return
    print(n, end=" ")
    printIncreasing(n-1)
    print(n, end=" ")

printIncreasing(5)
```
```
5 4 3 2 1 1 2 3 4 5 
```
### ➡️ Factorial of a number using Recursion
```python
def factorial(n):
    if(n==1):
        return 1
    return n*factorial(n-1)

fac = factorial(5)
print(fac)
```
```
120
```

### ➡️ Calculate Power (x,n)
```python
def power(x,n):
    if(n==0):
        return 1
    return x*power(x,n-1)
pow = power(2,6)
print(pow)
```
```
64
```

### ➡️ Calculate Power using Recursion (Logarithmic)
```python
def powerLog(x,n):
    if(n==0):
        return 1
    xpnb2 = powerLog(x,n//2)
    xpn = xpnb2*xpnb2
    if(n&1):
        xpn = xpn*x
    return xpn

pow = powerLog(2,7)
print(pow)
```
```
128
```

### ➡️ Print Zig-Zag
```python
def pzz(n):
    if(n==0):
        return
    print("pre",n)
    pzz(n-1)
    print("In",n)
    pzz(n - 1)
    print("Post",n)

pzz(2)
```
```
pre 2
pre 1
In 1
Post 1
In 2
pre 1
In 1
Post 1
Post 2
```
### ➡️ Tower of Hanoi
<img src="source\Tower_of_Hanoi.webp" alt="">
<img src="source\Tower_of_Hanoibg.webp" alt="">

```python
def toh(n,a,b,c):
    if(n==0):
        return
    toh(n-1,a,c,b)
    print(a,"->",c)
    toh(n-1,b,a,c)

toh(3,'a','b','c')
```
```
a -> c
a -> b
c -> b
a -> c
b -> a
b -> c
a -> c
```
### ➡️ Display Array Elements using Recursion
```python
def displayAnList(lst,n):
    if(len(lst)==n):
        return
    print(lst[n])
    displayAnList(lst,n+1)
lst = [1,2,3,4,5,6,7]
displayAnList(lst,0)
```
```
1
2
3
4
5
6
7
```
### ➡️ Display Array in Reverse
```python
def displayAnList(lst,n):
    if(len(lst)==n):
        return
    displayAnList(lst, n + 1)
    print(lst[n])

lst = [1,2,3,4,5,6,7]********
displayAnList(lst,0)
```
```
7
6
5
4
3
2
1
```
### ➡️ Find Maximum of an Array using Recursion 
```python
def MaxEle(lst,n):
    if(len(lst)==n):
        return -1
    return max(MaxEle(lst,n+1),lst[n])
max_element = MaxEle([2,7,3,1,87,12,54,8],0)
print(max_element)
```
```
87
```
### ➡️ First Index of Occurrence in Array using Recursion
```python
def firstIdx(lst,idx,val):
    if(len(lst)==idx):
        return -1
    
    if(val==lst[idx]):
        return idx
    else:
        return firstIdx(lst,idx+1,val)

print(firstIdx([2,7,3,12,87,12,54,8],0,12))
```
```
3
```
### ➡️ Last Index of Occurrence *
```python
def lastIdx(lst, idx, val):
    if (len(lst) == idx):
        return -1

    last_returned = lastIdx(lst,idx+1, val)
    if(last_returned==-1 and val==lst[idx]):
        last_returned = idx
    return last_returned

    """
    # Also the same
    last_returns = lastIdx(lst,idx+1,val)
    if(last_returns==-1):
        if(lst[idx]==val):
            return idx
        else:
            return -1
    else:****
        return last_returns
    """

print(lastIdx([2, 7, 3, 12, 87, 12, 54, 8], 0, 12))
```
```
5
```
### ➡️ All Indices in Array *
```python
def allIndices(lst,val,idx,fsf):
    if(len(lst)==idx):
        return [-1]*(fsf)

    if(lst[idx]==val):
        ilst = allIndices(lst, val, idx + 1, fsf+1)
        ilst[fsf] = idx
        return ilst
    else:
        return allIndices(lst,val,idx+1,fsf)


print(allIndices([2, 7, 3, 12, 87, 12, 54, 8,12],12,0,0))
```
```
[3, 5, 8]
```

## 🎡 Recursion With ArrayList & Strings
### ➡️ 
```python

```
```

```
### ➡️ 
```python

```
```

```

