#include<stdio.h>
int main(int argc, char const *argv[])
{
    int bankinh;
    printf("nhap ban kinh hinh tron: ");
    scanf("%d", &bankinh);
    float dientich = 3.14 * (bankinh^2);
    float chuvi = 2 * 3.14 * bankinh;
    printf("dien tich hinh tron la: %.2f\n", dientich);
    printf("chu vi hinh tron la: %.2f\n", chuvi);
    return 0;
}
