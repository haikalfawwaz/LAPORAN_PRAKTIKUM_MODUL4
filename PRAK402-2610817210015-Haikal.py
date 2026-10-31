batas = int(input())

for i in range(1, batas + 1, 2):
    print(i, end=" ")
print()

genap = batas if batas % 2 == 0 else batas - 1
for i in range(genap, 1, -2):
    print(i, end=" ")
print()