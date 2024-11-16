# print("Hello World")

# def square(x):
#     v = x * x
#     return v
#     print(v)

# print(square(8))

# question = input("What are you learning? ")
# print(max(1,24,7,8,11,23,9,3,98))
# if question == "python":
#     print("Correct")
# else:
#     print("Incorrect")

# for ingredients in "pyaz","Salt","Egg","Nothing":
#     print ("Put", ingredients, "in")

# n = 0.13

# while n < 1:
#     print (n)
#     n = n + 0.13

# print ("Done")

# digit = [ 1, 2, 3, 4, "list have different data type item in list but not in c++", 2.23]
# # list are like array concept of c++
# print(digit[-1])

# pairs = [ [0,10],[2,20],[3,30],[4,40], [2,2],[3,3],[3,3],['a','a'] ]
# count = 0
# for x , y in pairs:
#     if x == y:
#         count = count + 1

# print( count)

""" d = {
    "package":  "A package is module that can be added to any program",
    "random":   2,
    "Unary operation": "An operation that takes only one value for its operation"
}
print(d["package"]) """

""" import os
filename = "H:\VSOSS\ITC\Python"

f = open(filename , 'r')

for line in f:
    print(line)

f.close() """

""" def div(num, den):
    return num / float(den)

try:
    print ("Div 4 by 2 is:", div(4,0))
except ZeroDivisionError:
    print("Don't divide by 0")
except Exception:
    print("All errors are coverd in exception top hierechy")
except ValueError:
    print("This value is incorrect") """

class Animal:

    def sound(self):
        return "silence"
    def move(self):
        return True

class Dog(Animal):
    def sound(self):
        return "bark"