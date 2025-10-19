#include <stdio.h>

int main() {
    int n;
    double A;
    printf("Nhap mot so nguyen duong lon hon 1: ");
    scanf("%d", &n);
    A = 1.0 / ((n - 1) * n) + 1.0 / (n * (n + 1)) + 1.0 / ((n + 1) * (n + 2));
    printf("Gia tri cua bieu thuc A la: %.10f\n", A);
    return 0;
}