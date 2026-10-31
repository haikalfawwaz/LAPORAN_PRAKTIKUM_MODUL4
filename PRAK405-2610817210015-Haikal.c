#include <stdio.h>

int main() {
    int n, kelipatan;
    scanf("%d %d", &n, &kelipatan);
    int total = 0;

    for (int i = 1; i <= n; i++) {
        int sum_baris = 0;
        for (int j = i; j >= 1; j--) {
            printf("(%d * %d)", j, kelipatan);
            if (j > 1) {
                printf(" + ");
            }
            sum_baris += (j * kelipatan);
        }
        printf(" = %d\n", sum_baris);
        total += sum_baris;
    }
    printf("%d\n", total);
    return 0;
}