#include <iostream>
using namespace std;

// Prosedur Input
void input(float *d1, float *d2) {
    printf("Masukkan Diagonal 1: ");
    scanf("%f", d1);
    printf("Masukkan Diagonal 2: ");
    scanf("%f", d2);
}

// Fungsi Menghitung Luas
float hitungLuas(float d1, float d2) {
    return 0.5 * d1 * d2;
}

// Prosedur Output
void output(float luas) {
    printf("Luas Belah Ketupat = %.2f\n", luas);
}

// Program Utama
int main() {
    float d1, d2, luas;

    input(&d1, &d2);           // panggil prosedur input
    luas = hitungLuas(d1,d2);  // panggil fungsi
    output(luas);              // panggil prosedur output

    return 0;
}