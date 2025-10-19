#include<stdio.h>
int main(int argc, char const *argv[])
{
    int day, cao;
    printf("nhap do dai canh day: ");
    scanf("%d", &day);
    printf("nhap chieu cao: ");
    scanf("%d", &cao);
    float dientich = 0.5 * day * cao;
    printf("dien tich hinh tam giac la: %.2f\n", dientich);
    return 0;
}
