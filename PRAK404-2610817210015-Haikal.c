#include <stdio.h>

int main() {
    int pilihan;
    float nilai1, nilai2;

    while (1) {
        printf("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Muhammad Haikal Fawwaz\n");
            break;
        }

        if (pilihan < 1 || pilihan > 5) {
            printf("Input anda salah, silahkan coba lagi\n\n");
            continue;
        }

        printf("Masukkan nilai pertama : ");
        scanf("%f", &nilai1);
        printf("Masukkan nilai kedua : ");
        scanf("%f", &nilai2);

        if (pilihan == 1) {
            printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, nilai1 + nilai2);
        } else if (pilihan == 2) {
            printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, nilai1 - nilai2);
        } else if (pilihan == 3) {
            printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, nilai1 * nilai2);
        } else if (pilihan == 4) {
            printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n\n", nilai1, nilai2, nilai1 / nilai2);
        }
    }
    return 0;
}