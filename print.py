list1=set()
list2=set()
n1=int(input("Enter the number of colors in List1:"))
print("Enter the colors to List1:")
for x in range(n1):
    color=input()
    list1.add(color)
n2=int(input("Enter the number of colors in List2:"))
print("Enter the colors to List2:")
for x in range(n2):
    color=input()
    list2.add(color)
diff=list1.difference(list2)
print("COLORS IN LIST1 NOT IN LIST2:",diff)
