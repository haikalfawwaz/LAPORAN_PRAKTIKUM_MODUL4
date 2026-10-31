a, b = map(int, input().split())
temp_a, temp_b = a, b

if a < b:
    while temp_a <= b and temp_b >= a:
        print(f"{temp_a} {temp_b}", end="")
        if temp_a < b:
            print(" - ", end="")
        temp_a += 1
        temp_b -= 1
else:
    while temp_a >= b and temp_b <= a:
        print(f"{temp_a} {temp_b}", end="")
        if temp_a > b:
            print(" - ", end="")
        temp_a -= 1
        temp_b += 1
print()