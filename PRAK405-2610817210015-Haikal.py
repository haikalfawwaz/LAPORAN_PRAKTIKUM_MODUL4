n, kelipatan = map(int, input().split())
total = 0

for i in range(1, n + 1):
    sum_baris = 0
    for j in range(i, 0, -1):
        print(f"({j} * {kelipatan})", end="")
        if j > 1:
            print(" + ", end="")
        sum_baris += (j * kelipatan)
    print(f" = {sum_baris}")
    total += sum_baris
    
print(total)