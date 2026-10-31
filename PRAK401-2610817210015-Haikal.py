input_user = input().split()
kelipatan = int(input_user[0])
simbol = input_user[1]

for i in range(1, 51):
    if i % kelipatan == 0:
        print(simbol, end=" ")
    else:
        print(i, end=" ")
print()