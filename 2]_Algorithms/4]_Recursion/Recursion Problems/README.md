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
### ➡️ Get Subsequence
> n is the length of the string

`n -> 2^n [Subsequences]`
```python
def Subsequence(s):
    if(len(s)==0):
        return [""]

    lst_1 = Subsequence(s[1:])
    lst_ans = []
    for st in lst_1:
        lst_ans.append(st)
    for st in lst_1:
        lst_ans.append(s[0]+st)
    return lst_ans
lst = Subsequence('abc')
print(lst)
```
```
['', 'c', 'b', 'bc', 'a', 'ac', 'ab', 'abc']
```
### ➡️ Print Subsequence
```python
def subsequence(s,s_done):
    if(s==''):
        print(f"'{s_done}'")
        return

    subsequence(s[1:],s_done)
    subsequence(s[1:],s_done+s[0])

subsequence('abc','')
```
```
''
'c'
'b'
'bc'
'a'
'ac'
'ab'
'abc'
```
### ➡️ Get Keypad Combination
```python
phoneKeys = ['.;','abc','def','ghi','jkl','mno','pqrs','tu','vwx','yz']
def getKPC(str):
    if(len(str)==0):
        return [""]

    lst_ans = []
    last_combinations_lst = getKPC(str[1:])
    for preStr in last_combinations_lst:
        for comb_char in phoneKeys[int(str[0])]:
            lst_ans.append(comb_char+preStr)
    return lst_ans

print(getKPC('619'))
```
```
['pay', 'qay', 'ray', 'say', 'pby', 'qby', 'rby', 'sby', 'pcy', 'qcy', 'rcy', 'scy', 'paz', 'qaz', 'raz', 'saz', 'pbz', 'qbz', 'rbz', 'sbz', 'pcz', 'qcz', 'rcz', 'scz']
```
### ➡️ Print Keypad Combination
```python
phoneKeys = ['.;','abc','def','ghi','jkl','mno','pqrs','tu','vwx','yz']
def getKPC2(s,s_ans):
    if(s==''):
        print(f"'{s_ans}'")
        return
    for keyChar in phoneKeys[int(s[0])]:
        getKPC2(s[1:],s_ans+keyChar)
getKPC2('678','')
```
```
'ptv'
'ptw'
'ptx'
'puv'
'puw'
'pux'
'qtv'
'qtw'
'qtx'
'quv'
'quw'
'qux'
'rtv'
'rtw'
'rtx'
'ruv'
'ruw'
'rux'
'stv'
'stw'
'stx'
'suv'
'suw'
'sux'
```
### ➡️ Get Stairs Path
```python
def allpaths(n):
    if(n==0):
        return [""]
    elif (n < 0):
        return []

    lst_ans = []
    for lcl_str in allpaths(n-1):
        lst_ans.append("1"+lcl_str)
    for lcl_str in allpaths(n-2):
        lst_ans.append("2"+lcl_str)
    for lcl_str in allpaths(n-3):
        lst_ans.append("3"+lcl_str)

    return lst_ans
allP = allpaths(3)
print(allP)
```
```
['111', '12', '21', '3']
```
### ➡️ Print Stair Paths
```python
def allpaths2(s,s_ans):
    if(s<0):
        return
    elif(s==0):
        print(s_ans)
        return
    else:
        allpaths2(s-1,s_ans + '1')
        allpaths2(s-2,s_ans + '2')
        allpaths2(s-3,s_ans + '3')
allpaths2(4,'')
```
```
1111
112
121
13
211
22
31
```
### ➡️ Get Maze Paths
```python
def getmasepath(x1,y1,x2,y2):
    if(x1==x2 and y1==y2):
        return [""]

    path_lst = []

    if(x1<x2):
        for aftHmove in getmasepath(x1 + 1,y1 , x2, y2):
            path_lst.append("v"+ aftHmove)
    if(y1<y2):
        for aftVmove in getmasepath(x1,y1+1,x2,y2):
            path_lst.append("h"+aftVmove)

    return path_lst
mzPath = getmasepath(1,1,3,3)
print(mzPath)
```
```
['vvhh', 'vhvh', 'vhhv', 'hvvh', 'hvhv', 'hhvv']
```
### ➡️ Print Maze Paths
```python
def getmasepath2(x1,y1,x2,y2,s_ans):
    if(x1==x2 and y1==y2):
        print(s_ans)
    if(x1>x2 or y1>y2):
        return

    getmasepath2(x1+1,y1,x2,y2,s_ans+'h')
    getmasepath2(x1,y1+1,x2,y2,s_ans+'v')

getmasepath2(1,1,3,3,'')
```
```
hhvv
hvhv
hvvh
vhhv
vhvh
vvhh
```
### ➡️ Get Maze Paths with Jump
```python
def getmasepath(x1,y1,x2,y2):
    if(x1==x2 and y1==y2):
        return ['']

    path_lst = []


    for i in range(1,x2-x1+1):
        for aftHmove in getmasepath(x1 + i, y1, x2, y2):
            path_lst.append(f"h{i}{aftHmove}")

    for i in range(1,y2-y1+1):
        for aftVmove in getmasepath(x1, y1 + i, x2, y2):
            path_lst.append(f"v{i}{aftVmove}")

    for i in range(1,min(x2-x1+1,y2-y1+1)):
        for aftDmove in getmasepath(x1+i, y1 + i, x2, y2):
            path_lst.append(f"d{i}{aftDmove}")

    return path_lst

mzPath = getmasepath(1,1,3,3)
print(mzPath)
```
```
['h1h1v1v1', 'h1h1v2', 'h1v1h1v1', 'h1v1v1h1', 'h1v1d1', 'h1v2h1', 'h1d1v1', 'h2v1v1', 'h2v2', 'v1h1h1v1', 'v1h1v1h1', 'v1h1d1', 'v1h2v1', 'v1v1h1h1', 'v1v1h2', 'v1d1h1', 'v2h1h1', 'v2h2', 'd1h1v1', 'd1v1h1', 'd1d1', 'd2']

```
### ➡️ Print Maze Path with Jumps
```python
def getmasepathWithJumps(x1,y1,x2,y2,s_ans):
    if(x1==x2 and y1==y2):
        print(s_ans)

    for i in range(1,x2-x1+1):
        getmasepathWithJumps(x1+i,y1,x2,y2,s_ans+'h'+str(i))
    for i in range(1,y2-y1+1):
        getmasepathWithJumps(x1,y1+i,x2,y2,s_ans+'v'+str(i))
    for i in range(1,min(y2-y1,x2-x1)+1):
        getmasepathWithJumps(x1+i,y1+i,x2,y2,s_ans+'d'+str(i))

getmasepathWithJumps(1,1,3,3,'')
```
```
h1h1v1v1
h1h1v2
h1v1h1v1
h1v1v1h1
h1v1d1
h1v2h1
h1d1v1
h2v1v1
h2v2
v1h1h1v1
v1h1v1h1
v1h1d1
v1h2v1
v1v1h1h1
v1v1h2
v1d1h1
v2h1h1
v2h2
d1h1v1
d1v1h1
d1d1
d2
```
### ➡️ Print Permutations
```python
def permutations(s,s_dones):
    if(len(s)==0):
        print(s_dones,end = ' ')
        return
    for i in range(len(s)):
        permutations(s[:i]+s[i+1:],s_dones+s[i])

permutations('abc','')
```
```
abc acb bac bca cab cba 
``` 
### ➡️ Print Encodings
```python
def Encodings(n,s):
    if(n==''):
        print(s)
    if(len(n)<=0 or n[0]=='0'):
        return
    Encodings(n[1:],s + chr(int(n[0])+96))
    if(len(n)>=2 and int(n[0:2])<=26 and n[0]!='0'):
        Encodings(n[2:],s +   chr(int(n[0:2])+96) )

Encodings('12103','')
```
```
abac
abm
auc
lac
lm
```
## 🖇️ Recursion Backtracking
### ➡️ Flood Fill
```python
def floodfill(maze,row,col,psf):
    if(row<0 or col<0 or row>=len(maze) or col>=len(maze[0]) or maze[row][col]==True):
        return

    if(row == len(maze)-1 and col == len(maze[0])-1):
        print(psf)
        return
    maze[row][col] = True
    floodfill(maze,row,col+1,psf+'r')
    floodfill(maze,row+1,col,psf+'b')
    floodfill(maze,row,col-1,psf+'l')
    floodfill(maze,row-1,col,psf+'t')
    maze[row][col] = False


map_2D = []
i,j = map(int,input().split())
for i in range(i):
    map_2D.append(list(map(int,input().split())))

print(map_2D)
floodfill(map_2D,0,0,'')
```
```
6 7
0 1 0 0 0 0 0
0 1 0 1 1 1 0
0 0 0 0 0 0 0
1 0 1 1 0 1 1
1 0 1 1 0 1 1
1 0 0 0 0 0 0
[[0, 1, 0, 0, 0, 0, 0], [0, 1, 0, 1, 1, 1, 0], [0, 0, 0, 0, 0, 0, 0], [1, 0, 1, 1, 0, 1, 1], [1, 0, 1, 1, 0, 1, 1], [1, 0, 0, 0, 0, 0, 0]]
bbrrrrbbbrr
bbrrttrrrrbbllbbbrr
bbrbbbrrrrr
```
#### ➡️ Flood Fill Print Path
```python
import numpy as np
map_2D = np.zeros((6,7),dtype=int)
map_2D[0][1]=map_2D[1][1]=map_2D[1][3]=map_2D[1][4]=map_2D[1][5]= map_2D[1][5]= map_2D[3][0]= map_2D[3][2]= map_2D[3][3]= map_2D[3][5]= map_2D[3][6]=map_2D[4][0]= map_2D[4][2]= map_2D[4][3]= map_2D[4][5]= map_2D[4][6]= map_2D[5][0]= 1
visited_map = np.zeros((6,7),dtype=bool)
print(map_2D)

def floodfill(maze,row,col,psf,visited_map):
    if(row<0 or col<0 or row==len(maze) or col == len(maze[0]) or maze[row][col] == 1 or visited_map[row][col]==True):
        return
    if(row == len(maze)-1 and col == len(maze[0])-1):
        print("-----------------------------")
        visited_map[row][col] = True
        for i in range(len(visited_map)):
            for j in range(len(visited_map[0])):
                print(1 if (visited_map[i][j]) else '`',end=" ")
            print()
        print(psf)
        visited_map[row][col] = False
        return
    visited_map[row][col] = True
    floodfill(maze, row, col + 1, psf + "R", visited_map)
    floodfill(maze, row - 1, col, psf + "T", visited_map)
    floodfill(maze, row, col - 1, psf + "L", visited_map)
    floodfill(maze, row + 1, col, psf + "D", visited_map)
    visited_map[row][col] = False
floodfill(map_2D,0,0,'',visited_map)
```
```
[[0 1 0 0 0 0 0]
 [0 1 0 1 1 1 0]
 [0 0 0 0 0 0 0]
 [1 0 1 1 0 1 1]
 [1 0 1 1 0 1 1]
 [1 0 0 0 0 0 0]]
-----------------------------
1 ` ` ` ` ` ` 
1 ` ` ` ` ` ` 
1 1 1 1 1 ` ` 
` ` ` ` 1 ` ` 
` ` ` ` 1 ` ` 
` ` ` ` 1 1 1 
DDRRRRDDDRR
-----------------------------
1 ` 1 1 1 1 1 
1 ` 1 ` ` ` 1 
1 1 1 ` 1 1 1 
` ` ` ` 1 ` ` 
` ` ` ` 1 ` ` 
` ` ` ` 1 1 1 
DDRRTTRRRRDDLLDDDRR
-----------------------------
1 ` ` ` ` ` ` 
1 ` ` ` ` ` ` 
1 1 ` ` ` ` ` 
` 1 ` ` ` ` ` 
` 1 ` ` ` ` ` 
` 1 1 1 1 1 1 
DDRDDDRRRRR
```
### ➡️ Target Sum Subsets
```python
def printTargetSumSubset(lst,lst_ans):
    if(len(lst)==0):
        if(sum(lst_ans)==target):
            print("->",lst_ans)
        return

    printTargetSumSubset(lst[1:],lst_ans+[lst[0]])
    printTargetSumSubset(lst[1:],lst_ans)

target = 60
lst_num = [10,20,30,40,50,60]
printTargetSumSubset(lst_num,[])
```
```
-> [10, 20, 30]
-> [10, 50]
-> [20, 40]
-> [60]
```

### ➡️ N Queens
```python
def isItaSafePlaceForTheQueen(chess,row,col):
    for r in range(row-1,-1,-1):
        if(chess[r][col]):
            return False
    for r,c in zip(range(row-1,-1,-1),range(col-1,-1,-1)):
        if (chess[r][c]):
            return False
    for r,c in zip(range(row-1,-1,-1),range(col+1,len(chess[0]))):
        if(chess[r][c]):
            return False
    return True


def printNQueens(chess,row,qsf):
    if row==len(chess):
        print(qsf)
        return

    for col in range(len(chess[0])):
        if isItaSafePlaceForTheQueen(chess,row,col)==False:
            continue

        chess[row][col] = 1
        printNQueens(chess,row+1,f"{qsf} {row}-{col},")
        chess[row][col] = 0

import numpy as np
chess = np.zeros((4,4),dtype=int)

printNQueens(chess,0,"")
```
```
 0-1, 1-3, 2-0, 3-2,
 0-2, 1-0, 2-3, 3-1,
```

### ➡️ Knights Tour
```python
def displayBoard(chess):
    for i in range(len(chess)):
        for j in range(len(chess[0])):
            print(chess[i][j],end=" ")
        print()
    print()

def printknightsTour(chess,r,c,move):
    if r<0 or c<0 or r>=len(chess) or c>=len(chess) or chess[r][c]!=0:
        return
    elif move == len(chess)*len(chess):
        chess[r][c] = move
        displayBoard(chess)
        chess[r][c] = 0
        return

    chess[r][c] = move
    printknightsTour(chess, r - 2, c + 1, move+1)
    printknightsTour(chess, r - 1, c + 2, move+1)
    printknightsTour(chess, r + 1, c + 2, move+1)
    printknightsTour(chess, r + 2, c + 1, move+1)
    printknightsTour(chess, r + 2, c - 1, move+1)
    printknightsTour(chess, r + 1, c - 2, move+1)
    printknightsTour(chess, r - 1, c - 2, move+1)
    printknightsTour(chess, r - 2, c - 1, move+1)
    chess[r][c] = 0


n = int(input())
import numpy as np
chess = np.zeros((n,n),dtype=int)
x,y = map(int,input().split())
printknightsTour(chess,x,y,1)
```
```
5
2 0
25 2 13 8 23 
12 7 24 3 14 
1 18 15 22 9 
6 11 20 17 4 
19 16 5 10 21 

19 2 13 8 21 
12 7 20 3 14 
1 18 15 22 9 
6 11 24 17 4 
25 16 5 10 23 
...
```

