#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int temp_a = a, temp_b = b;

    if (a < b) {
        while (temp_a <= b && temp_b >= a) {
            printf("%d %d", temp_a, temp_b);
            if (temp_a < b) printf(" - ");
            temp_a++; temp_b--;
        }
    } else {
        while (temp_a >= b && temp_b <= a) {
            printf("%d %d", temp_a, temp_b);
            if (temp_a > b) printf(" - ");
            temp_a--; temp_b++;
        }
    }
    printf("\n");
    return 0;
}   