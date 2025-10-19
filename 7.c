#include<stdio.h>
int main(int argc, char const *argv[]) 
{
    int n, a, b, c, d , tong;
    printf("nhap so nguyen 4 chu so: ");
    scanf("%d", &n);
    a = n / 1000;
    b = (n / 100) % 10;
    c = (n / 10) % 10;
    d = n % 10;
    tong = a + b + c + d;
    printf("tong 4 chu so la: %d\n", tong);
    return 0;
}
