


### ➡️ Reverse a String
> We can also use stack, Recursion, or two pointer approach to reverse a string.
```python
```python
def split(word): 
    return [char for char in word]  
def reverseWord(s):
    st = split(s)
    l,r = 0,len(s)-1
    while l<r:
        st[l],st[r] = st[r],st[l]
        l,r = l+1,r-1
    return "".join(st)
```