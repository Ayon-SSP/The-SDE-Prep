# ---------------------------------------------------<Recursion>---------------------------------------
"""
def fac(val):
    if (val == 1):
        return int(1)
    return val*fac(val-1)
def pows(val,t):
    if(t==1):
        return val
    return val*pow(val,t-1)
# def pow1(val,t):
#     if(t==1):
#         return val
#     elif(t%2==0):
#         return pow1(val,t//2)* pow1(val,t//2)
#     else:
#         return pow1(val,t//2)* pow1(val,t//2)*val
def pow1(x,n):
    if(n==1):
        return x
    p = pow1(x,n//2)
    po = p*p
    if(n%2==1):
        po = po*x
    return po
def pA(arr,i):
    if(i==-1):
        return
    pA(arr,i-1)
    print(arr[i])
def maxele(lst,t):
    if(len(lst)-1==t):
        return lst[t]
    return max(lst[t],maxele(lst,t+1))

lst = [456,1,2,3,4,5,6,875]
print(maxele(lst,0))
pA([1,2,3,4,5,6,7],6)
# print(pow1(9,2))
"""
# print(min(1,2,3,4))
# --------------------------------------------<[https://www.datacamp.com/community/tutorials/decorators-python]decorators>---------------------------------------------------------------
"""
# def div(a,b):
#     if(a<b):
#         a,b = b,a
#     print(a/b)

# def rem(a,b):
#     if(a<b):
#         a,b=b,a
#     print(a%b)

# # div = smart_div(div)
# div(2,4)
# rem(3,10)



def smart_one(funk):
    def new(a,b):
        if(a<b):
            a,b = b,a
            return funk(a,b)
    return new
@smart_one
def dev(a,b):
    print(a/b)
@smart_one
def rem(a,b):
    print(a%b)

# dev = smart_one(dev)
dev(2,4)
rem(5,11)

"""
"""
def star (func):
    def inner (arg):
        print("*"* 30)
        func(arg)
        print("*"* 30)
    return inner

def percent (func):
    def inner (arg):
        print("%" * 30)
        func(arg)
        print("%" *30)
    return inner

@star
@percent

def printer (msg):
    print (msg)

printer("Decorators are wonderful")
"""
"""
def plus_one(number):
    return number + 1

add_one = plus_one

print(add_one(5))
"""
"""
def plus_one(number):
    def add_one(number):
        return number + 1

    result = add_one(number)
    return result
print(plus_one(4))
"""

# def plus_one(number):
#     return number + 1
#
# add_one = plus_one
# add_one(5)



"""def plus_one(num):
    return num + 1
carry = plus_one # it holdes the value
print(carry(8))
"""
"""
def plus_one(number):
    def add_one(number):
        return number + 1


    result = add_one(number)
    return result

print(plus_one(4))
"""

"""
def add(a, b):
    return a + b

def val(a,b):
    ans = add(a,b)
    return ans
print(val(3,4))
"""





# def plus_one(number):
#     return number + 1
#
# def function_call(function):
#     number_to_add = 5
#     return function(number_to_add)
#
# print(function_call(plus_one))
#
#
#
# def plus_two(number):
#     return number + 2
# def plus_one(number):
#     return  number + 1
#
# def caller(fun):
#     num = fun(3)
#     return num
#
# print(caller(plus_one))

"""
def Subsequence(s):
    if(s == ""):
        return [""]
    a = s[0] # a
    if(len(s)==1):
        b = ""
        # bc
    else:
        b = s[1:]

    lst_1 = Subsequence(b)
    lst_ans = []
    for st in lst_1:
        lst_ans.append(st)
    for i in range(len(lst_1)):
        lst_ans.append(a+lst_1[i])
    return lst_ans

print(Subsequence('abc'))

def subsequence(s,s_dones):
    if(s==''):
        print('->',s_dones)
        return
    subsequence(s[1:], s_dones)
    subsequence(s[1:],s_dones+s[0])

subsequence('abc','')

def subsequence(s,s_dones):
    if(len(s)==0):
        print(s_dones,end = ' ')
        return
    for i in range(len(s)):
        subsequence(s[:i]+s[i+1:],s_dones+s[i])

subsequence('abcd','')

"""
"""
# Get Keypad Combination
phoneKeys = ['.;','abc','def','ghi','jkl','mno','pqrs','tu','vwx','yz']
def hacker(str):
    if(len(str)==0):
        return [""]
    a = str[0]
    if(len(str)!=1):
        b = str[1:]
    else:
        b=''
    lst_ans = []
    last_combinations_lst = hacker(b)
    curr_num_key_chars = phoneKeys[int(a)]
    for char_idx in range(len(curr_num_key_chars)):
        for comb_char_idx in range(len(last_combinations_lst)):
            lst_ans.append(curr_num_key_chars[char_idx]+last_combinations_lst[comb_char_idx])

    return lst_ans
print(hacker('678'))


def hacker2(s,s_ans):
    if(s==''):
        print(s_ans)
        return
    for i in range(len(phoneKeys[int(s[0])])):
        hacker2(s[1:],s_ans + phoneKeys[int(s[0])][i])

hacker2('678','')
"""
"""
# def allpaths(n):
#     if(n==1):
#         return ['1']
#     lst_ans = []
#     if(n!=1):
#         lst_ans.append(str(n))
#     for i in range(1,n):
#         lst_ans.append(allpaths(n-i)+str(i)) #this is wrong look at next code this is for understanding
#     return lst_ans
#
# print(allpaths(3))

def allpaths(n):
    if(n==1):
        return ['1']
    lst_ans = []
    for i in range(1,n):
        for path in allpaths(n - i):
            lst_ans.append( str(i)+path)
    if (n != 1):
        lst_ans.append(str(n))
    return lst_ans

print(allpaths(4))
"""
"""
def allpaths(n):
    if not n:
        return ['']
    lst_ans = []
    for i in range(1,n):
        for path in allpaths(n - i):
            lst_ans.append(path + str(i))

    lst_ans.append(str(n))
    print(lst_ans)
    return lst_ans

print(allpaths(4))
"""
"""
def allpaths(n):
    if(n==0):
        return ['']
    elif(n<0):
        return []
    lst_ans = []
    c = allpaths(n-3)
    b = allpaths(n-2)
    a = allpaths(n-1)
    for path in a:
        lst_ans.append(path+'1')
    for path in b:
        lst_ans.append(path+'2')
    for path in c:
        lst_ans.append(path+'3')
    return lst_ans

print(allpaths(4))

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
"""
"""
def getmasepath(x1,y1,x2,y2):
    if(x1==x2 and y1==y2):
        return ['']

    vpath = []
    hpath = []

    if(y1<y2):
        hpath = getmasepath(x1, y1 + 1, x2, y2)
    if(x1<x2):
        vpath = getmasepath(x1 + 1, y1, x2, y2)
    path_lst = []
    for i in range(len(vpath)):
        path_lst.append('v'+vpath[i])
    for i in range(len(hpath)):
        path_lst.append('h' + hpath[i])
    # print(path_lst)
    return path_lst

print(getmasepath(1,1,3,3))

def getmasepath2(x1,y1,x2,y2,s_ans):
    if(x1==x2 and y1==y2):
        print(s_ans)
    if(x1>x2 and y1>y2):
        return

    if(x1<x2):
        getmasepath2(x1+1,y1,x2,y2,s_ans+'-')
    if (y1 < y2):
        getmasepath2(x1,y1+1,x2,y2,s_ans+'|')

getmasepath2(1,1,3,3,'')
"""

"""
def getmasepath(x1,y1,x2,y2):
    if(x1==x2 and y1==y2):
        return ['']
    vpath = []
    hpath = []
    apath = []
    if(y1<y2):
        hpath = getmasepath(x1, y1 + 1, x2, y2)
    if(x1<x2):
        vpath = getmasepath(x1 + 1, y1, x2, y2)
    if(x1<x2 and y1<y2):
        apath = getmasepath(x1 + 1, y1 + 1, x2, y2)
    path_lst = []

    for i in range(len(vpath)):
        path_lst.append('|'+vpath[i])
    for i in range(len(hpath)):
        path_lst.append('-' + hpath[i])
    for i in range(len(apath)):
        path_lst.append('/' + apath[i])

    return path_lst


print(getmasepath(1,1,3,3))

def getmasepath2(x1,y1,x2,y2,s_ans):
    if(x1==x2 and y1==y2):
        print(s_ans)
    if(x1>x2 and y1>y2):
        return

    if(x1<x2):
        getmasepath2(x1+1,y1,x2,y2,s_ans+'-')
    if (y1 < y2):
        getmasepath2(x1,y1+1,x2,y2,s_ans+'|')
    if(x1<x2 and y1 < y2):
        getmasepath2(x1+1,y1+1,x2,y2,s_ans+'/')

getmasepath2(1,1,3,3,'')

"""
"""
def getmasepath2(x1,y1,x2,y2,s_ans):
    if(x1==x2 and y1==y2):
        print(s_ans)

    for i in range(1,x2-x1+1):
        getmasepath2(x1+i,y1,x2,y2,s_ans+'-'+str(i))
    for i in range(1,y2-y1+1):
        getmasepath2(x1,y1+i,x2,y2,s_ans+'|'+str(i))
    for i in range(1,min(y2-y1,x2-x1)+1):
        getmasepath2(x1+i,y1+i,x2,y2,s_ans+'/'+str(i))

getmasepath2(1,1,3,3,'')
"""
# ---------------<Print Encodings>------------------------
"""
def Encodings(n,s):
    if(n==''):
        print(s)
    if(len(n)<=0):
        return
    Encodings(n[1:],s + chr(int(n[0])+96) )
    # if (len(n) == 2):
    #     Encodings('',chr(int(n[0:2])+96))
    if(len(n)>=2 and int(n[0:2])<=26):
        Encodings(n[2:],s +   chr(int(n[0:2])+96)         )

Encodings('9870','')
"""
"""
import numpy as np
map_2D = np.zeros((6,7),dtype=int)
map_2D[0][1]=map_2D[1][1]=map_2D[1][3]=map_2D[1][4]=map_2D[1][5]= map_2D[1][5]= map_2D[3][0]= map_2D[3][2]= map_2D[3][3]= map_2D[3][5]= map_2D[3][6]=map_2D[4][0]= map_2D[4][2]= map_2D[4][3]= map_2D[4][5]= map_2D[4][6]= map_2D[5][0]= 1
visited_map = np.zeros((6,7),dtype=bool)
print(map_2D)

def floodfill(maze,row,col,psf,visited_map):
    if(row<0 or col<0 or row==len(maze) or col == len(maze[0]) or maze[row][col] == 1 or visited_map[row][col]==True):
        return
    if(row == len(maze)-1 and col == len(maze[0])-1):
        print(psf)
        return
    visited_map[row][col] = True
    floodfill(maze, row, col + 1, psf + "R", visited_map)
    floodfill(maze, row - 1, col, psf + "T", visited_map)
    floodfill(maze, row, col - 1, psf + "L", visited_map)
    floodfill(maze, row + 1, col, psf + "D", visited_map)
    visited_map[row][col] = False
floodfill(map_2D,0,0,'',visited_map)
"""
# import numpy as np
# mx_1 = np.array([[1,2,3],
#                  [4,5,6],
#                  [7,8,9]])
# mx_2 = np.array([[1,2,3],
#                  [4,5,6],
#                  [7,8,9]])
#
# print(np.matmul(mx_1,mx_2))
# # mx_ans = np.zeros((3,3),dtype=int)
# # print(len(mx_ans[0]))
# # print(mx_1[2][1])
# mx_ans = np.zeros((3,3),dtype=int)
# print(mx_ans)
# for i in range(len(mx_ans)):
#     for j in range(len(mx_ans[0])):
#         for k in range(len(mx_ans[0])):
#             mx_ans[i][j] += mx_1[i][k]*mx_2[k][j]
#
# print(mx_ans)




"""
def find(lst,val,start,end):
    # mid = len(lst)//2
    mid = (end+start)//2
    new_start = start
    new_end = end
    if(lst[mid]==val):
        return mid
    elif(lst[mid]<val):
        new_start = mid +1
    elif(lst[mid]>val):
        new_end = mid - 1

    find(lst,val,new_start,new_end)

print(find([0,1,2,3,4,5,6,7,8],4,0,8))
"""

#-------------------------------------end of recursion>--------------------
