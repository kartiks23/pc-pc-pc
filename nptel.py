# ASSIGNMENT-3

# f = open('file.txt', 'r')
# print()
# f.close()

# with open('file.txt', 'r') as f:
#     f_contents = f.readline()
#     print(f_contents, end='')
#     f_contents = f.readline()
#     print(f_contents, end='')
#     f_contents = f.readline()
#     print(f_contents, end='')


# with open('file.txt', 'r') as f:
#     for k in f:
#         print(k, end='')


# with open('file.txt', 'r') as f:

#     f_contents = f.read(50)
#     print(f_contents, end='')
#     f_contents = f.read(50)
#     print(f_contents, end='')
#     f_contents = f.read(50)
#     print(f_contents, end='')


# with open('file.txt', 'r') as f:
#     size_to_read = 10
#     f_contents = f.read(size_to_read)
#     print(f.tell())
#     # f.seek(0) to go to 0th position
#     while(len(f_contents) > 0):
#         print(f_contents, end='$')
#         f_contents = f.read(size_to_read)


# with open('file.txt', 'w') as f:
#     f.write("test is a test of writing")
#     # whole file is replaced by this written text.

# with open('file.txt', 'r') as f:
#     print(f.read())


# with open('file.txt', 'r') as rf:
#     with open('copyfile.txt', 'w') as wf:
#         for line in rf:
#             wf.write(line)
#          # take line from file and put it in copyfile
# with open('copyfile.txt', 'r') as f:
#     print(f.read())

# with open('copyfile.txt', 'a') as f:  # append
#     f.write("\nthis is the appended text in the copy file")

# with open('copyfile.txt', 'r') as f:
#     print(f.read())


# with open('file.txt', 'w') as file:
#     file.write('1000111011')
# file.close()

# with open('file.txt' ,'r') as file:
#     L = list(file.read())
# file.close()

# for i in range(len(L)):
#     if(i%2==0 and L[i] == '0'):
#         L[i] = '1'
#     if(i%2 == 1 and L[i] == '1'):
#         L[i] ='0'

# print(L)

# L = []
# for i in range(len(L)):
#     if(i%2 == 1):
#         print(L[i])


# txt = "welcome to the jungle"

# x = txt.split()

# print(x)

# txt = "hello, my name is Peter, I am 26 years old"

# x = txt.split(", ")

# # print(x)


# L = [int(i) for i in input().split()]
# print(sorted(L)[:3])
# print(sorted(L)[::-1][:2],end="")


# n = int(input())


# for i in range (0, n+1):
#     for j in range(n-1-i,-1, -1):
#         print('#', end='')
#     print('*')


# v = ['A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u']
# an =''
# a = input()
# for c in a:
#     if(c not in v):
#         an += '-'
#     else:
#         an += c

# print(an)

# a=int(input())
# b=int(input())
# c=int(input())
# L=[a,b,c]
# h=max(L)
# # L.remove(h)
# L.sort()
# if h**2==L[0]**2+L[1]**2:
#   print("YES",end="")
# else:
#   print("NO",end="")
# def square(T):
#     L = list(T)
#     for i in T:
#         L.append(i**2)
#     return tuple(L)

# n =int(input())
# L = list(map(int, input().split()))
# T = tuple(L)
# ans = square(T)
# if type(T) == type(ans):
#     print(ans)
# v = 'AEIOUaeiou'
# str = input()
# ans = ''
# i=0
# while (i < len(str) -2):
#     if str[i] in v and str[i+1] in v and str[i+2] in v:
#        ans += '_'
#        i +=3
#     else:
#         ans+= str[i]
#         i+=1
# print(ans + str[i:])

# L = list(map(int, input().split()))
# A = list()
# count = 0
# for i in L:
#     if(i != 0):
#         A.append(i)
#         count +=1
# for i in range(len(L)- count):
#     A.append(0)
# print(A)
# L = list(map(int, input().split()))
# m = max(L)
# L1 = [0] * (m+1)
# for i in L:
#     L1[i] =  i
# print(L1, end='')


