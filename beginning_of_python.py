#Testing python language....

print("Hello World!")
print("Have a good day!")
print("Learning Python is fun!")
print(35)
print(100.5)
print("I am", 35, "years old.")

"""
I am writing a comment in multiple 
lines
I already know how to write a comment in a single line

print("I am learning Python programming language.")
I know this above won't be printed because it is in a comment block.

"""
#A variable is created by assigning a value to it. 

x = 10
print(x)

y = "Hello my friend"
print(y)

#Casting is when you specify a variable type.

x = str(3)
y =int(5)
z = float(3)
print (x)
print (y)   
print (z)

fruits = ["Apple","Banana","Cherry"]
x,y,z = fruits

print(x)
print(y)
print(z)

#Checking length of string
banana = "banana"
print(len("banana"))

#looping through string
for x in banana:
    print(x)

#Check string
txt = "I am Dauda"
print( "Dauda" in txt)

#Upper case
a = "Dauda"
print(a.upper())


#Relace string
b = "Dauda"
print(b.replace("D","S"))

#Concatenation
a = "Hello"
b = "World"
c = a + " " + b
print(c)

#f-string
age = 36
txt = f"My name is John, I am {age}"
print(txt)

#placeholder
txt = f"The price is {20 * 59} dollars"
print(txt)

#escape character
txt = "We are the so-called \"Vikings\" from the north."
print(txt) 

#ternary operator
num = 6
x = "Fri" if num == 5 else "Sat" if num == 6 else "Sun" if num == 7 else "weekday"
print(x)

#appending
thislist = ["apple", "banana", "cherry"]
thislist.append("orange")
print(thislist)

#inserting
thislist = ["apple", "banana", "cherry"]
thislist.insert(1, "orange")
print(thislist)

#remove specified index
thislist = ["apple", "banana", "cherry"]
thislist.pop(1)
print(thislist)

#delete keyword
thislist = ["apple", "banana", "cherry"]
del thislist[0]
print(thislist)

thislist = ["apple", "banana", "cherry"]
del thislist

#clear the list
thislist = ["apple", "banana", "cherry"]
thislist.clear()
print(thislist)

#looping through list
thislist = ["apple", "banana", "cherry"]
for x in thislist:
  print(x)

#while loop
thislist = ["apple", "banana", "cherry"]
i = 0
while i < len(thislist):
  print(thislist[i])
  i = i + 1


fruits = ["apple", "banana", "cherry", "kiwi", "mango"]
newlist = []

for x in fruits:
  if "a" in x:
    newlist.append(x)

print(newlist)