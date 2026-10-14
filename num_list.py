list =[]
n=int(input("Enter thee number of elements in the list:"))
print("Enter the elemens of the list")
for i in range(n):
      value = int(input())
      list.append(value)
total=0
for item in list:
      total = total+item
print("The sum of the list is:", total)
