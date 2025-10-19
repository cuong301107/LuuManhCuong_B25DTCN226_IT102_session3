#include<stdio.h>
int main(int argc, char const *argv[])
{
    int celsius;
    printf("nhap nhiet do C: ");
    scanf("%d", &celsius);
    float fahrenheit = (celsius * 9 / 5) +32;
    printf("nhiet do F la: %.2f\n", fahrenheit);
    return 0;
}
