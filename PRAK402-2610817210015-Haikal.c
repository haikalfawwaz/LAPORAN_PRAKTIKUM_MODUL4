#include <stdio.h>

int main() {
    int batas;
    scanf("%d", &batas);

    for (int i = 1; i <= batas; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    int genap = (batas % 2 == 0) ? batas : batas - 1;
    for (int i = genap; i >= 2; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}