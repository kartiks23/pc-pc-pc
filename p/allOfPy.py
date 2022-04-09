#   print("hello world")
#   message = "This is a string."
#   print(message)
#   message1 = """ I'm so used to telling people to fuck off tham
#   sometimes i forget that they said "They are busy." """
#   print(message1)
#   a = 123
#   b = 341.523
#   z = 2+63453j
#   print(z)
#   print(a)
#   print(b)
#   print(z.real)
#   print(z.imag)

#   print(pow(2, 5))

#   ninja = input("Please enter: ")

#   if len(ninja)<6:
#       print("Please enter different string.")

#   side1 = input("Please enter a side 1: ")
#   side1 = int(side1)
#   side2 = input("Please enter a side 2: ")
#   side2 = int(side2)
#   side3 = input("Please enter a side 3: ")
#   side3 = int(side3)

#   if side1 != side2 and side2 != side3 and side1 != side3:
#       print("The triangle is scalean")
#   elif side1 == side2 and side2 == side3:
#       print("The triangle is equilaterial")
#   else:
#       print("The triangle is isocelious")

#   from cgi import print_form


#   def ping():
#       return "Ping!!"

#   print(ping())
# def vol(r):
#     volume = 4/3 * 3.14* r**3
#     return volume

#   r = float(input ("Please enter the radius of the sphere"))
#   print("The volume of the sphere is " + vol(r))
# print(vol(1))

# from math import remainder
# import random
# a = set()  # add, no order, ignore second time, .remove if error, .discard if no erroe, .clear to empty, .union, .intersection, 5 in prime=>True, 4 not in prime =>False
# b = list()  # append, order, b = [] or list(), back last is -1, prime[2:5] 2 is included but 5 isn't, all type of data, duplicate allowed, number + letters != letters + numbers
# # wtf is this bruh, order doesn't matter, key hota and value hota, dict class,
# c = {"Name": "Kartik", "Sirname": "Sharma",
#      "Roll NUmber": 2006111, "Father": "Alive", "Mother": "Alive"}

# c2 = dict(Name="Kartik", sirname="Sharma")  # here "" not required in key,
# a.add("True")
# a.add(True)
# a.add(47)
# a.add("Kartik Sharma")
# print(a)
# a.remove("kartik")
# a.discard("Sharma")
# print(a)
# a.discard("Kartik Sharma")
# print(a)
# b.append("Kartik")
# b.append("Sharma")
# b.append(99)
# b.append(True)
# b.append((42,5252,523525,21561561,5132523))
# print(b)
# print(b)
# print(b[0:3])
# print(b[0:-1])
# print(b[-1])
# try:
#     b.remove("Kartik")
#     print(b)
# except ValueError:
#     print("Nhi hai ye sab lavdes")
# c2["Roll Number"] = 2006111#like this u can add things to dict HERE YOU NEED TO PUT "" IN KEY
# c2["Father"] = "Alive"
# print(c)
# print(c2)
# print(c2["Name"])
# print(c["Name"])

# try: print(c2["Pencho"])
# except KeyError: print("Not present there")

# print(c2.get("pencho", 44))
# for i in c.keys():
#     k = c[i]
#     print(i, "=" , k)


# for key, value in c2.items():
#      print(value, "=", key)

# c.popitem()
# print(c)

# a.add("Name")
# a.add("Kartik")
# a.add("Sharma")
# a.add("Roll Number")
# a.add(2006111)
# for i in a:
#     print(i)
# here the i gives us the value, treat it as a pointer giving us the value


# tuples

# tuple = 1,2,3,4
# a,b,c,d = tuple

# print(a,b,c,d)
# from functools import lru_cache
# @lru_cache(maxsize=1000)

# def fab(n):
#     if n==1:
#         return 1
#     elif n==2:
#         return 1
#     else:
#         return fab(n-1) + fab(n-2)

# for i in range(1,1001):
#     print(fab(i))


# def random_walk(n):
#     """Return coordinate after n random walks."""
#     x = 0
#     y = 0
#     for i in range(n):
#         step = random.choice(['N', 'S', 'E', 'W'])
#         if step == 'N':
#             y = y+1
#         elif step == 'S':
#             y = y-1
#         elif step == 'E':
#             x = x+1
#         else:
#             x = x-1
#     return (x, y)

# def random_walk2(n):
#     x, y = 0, 0
#     for i in range(n):
#         dx, dy = random.choice([(0, 1), (0, -1), (1, 0), (-1, 0)])
#         x += dx
#         y += dy
#     return (x, y)


# for i in range(25):
#     walk = random_walk2(10)
#     print(walk, ": The distance from home is ", abs(walk[0]) + abs(walk[1]))

# square = []

# for i in range(1, 101):
#     square.append(i**2)
# print(square)

# square2 = [i**2 for i in range(1, 101)]
# print(square2)

# remainder = [i**2 % 5 for i in range(1, 101)]
# print(remainder)
# vector = [2, 3, 5]
# w = 4*vector  # prints the vector + vector + vector + vector
# # adds both the lists not adds the individual elements
# m = [2, 523, 52] + [523, 534, 5346]

# print(w)
# print(m)

# ww = [4*x for x in vector]
# print(ww)

# class User:
#     pass


# user1 = User()
# user1.first_name = "Kartik"
# user1.last_name = "Sharma"
# user2 = User()
# user2.first_name = "Karan"
# user2.last_name = "Singh"
# first_name = "Yo yo"
# last_name = "Honey Singh"

# print(first_name)
# print(last_name)
# print(user1.first_name)
# print(user1.last_name)

# print(user2.first_name)

# print(user2.last_name)

# import datetime


# class User:
#     """just write this so you know what this class is for"""

#     def __init__(self, full_name, birthday):  # self is defined here
#         self.name = full_name  # name kuch bhi is defined here
#         self.birthday = birthday
#         name_pieces = full_name.split(" ")
#         self.first_name = name_pieces[0]
#         self.last_name = name_pieces[-1]

#     def age(self):  # kuch function/method is defined here and it is taking in self and all the things we inserted in init function
#         today = datetime.date(2022, 9, 3)
#         yyyy = int(self.birthday[0:4])
#         mm = int(self.birthday[4:6])
#         dd = int(self.birthday[6:8])
#         dob = datetime.date(yyyy, mm, dd)
#         age_in_days = (today - dob).days
#         age_in_years = age_in_days/365
#         return (age_in_years)


# user = User("Karik Sharma", "20020903")

# # print(user.name)
# # print(user.birthday)
# # print(user.last_name)
# # print(user.first_name)
# # help(User)
# print(user.age())


# prime numbers in python

from cmath import sqrt
from operator import truediv
import math


def prime(n):
    """This is for finding prime numbers the long way"""
    s = int(math.sqrt(n))
    if n % 2 == 0:
        return False
    else:
        for d in range(2, s+1):

            if n % d == 0:
                return False
            else:
                return True


print(prime(10))
