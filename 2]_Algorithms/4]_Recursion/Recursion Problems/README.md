# ♻️ Recursion & Backtracking Problems

![Recursion & Backtracking img](source\rb.jpg)
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
![tOH](source\Tower_of_Hanoi.webp)
![tOH](source\Tower_of_Hanoibg.webp)
```python

```
```

```
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

