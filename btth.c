#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    double S;
    printf("Nhập số nguyên dương a: ");
    scanf("%d", &a);
    printf("Nhập số nguyên dương b: ");
    scanf("%d", &b);
    S = sqrt(a * a + b * b) / (a + b) + sqrt(a + sqrt(b)) / (a * b);
    printf("Giá trị của biểu thức S là: %.6f\n", S);

    return 0;
}