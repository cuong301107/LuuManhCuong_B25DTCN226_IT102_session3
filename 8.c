#include<stdio.h>
#include<math.h>
int main()
{
   int A ;
   printf("Nhap so nguyen co 4 chu so: ");
   scanf("%d", &A);
    int B = A % 10;
    int A2 = A / 10;
    int C = A2 % 10;
    int A3 = A2 / 10;
    int D = A3 % 10;
    int A4 = A3 / 10;
    int E = A4 % 10;
    int result = B *1000 + C * 100 + D * 10 + E  ;
    printf("So dao nguoc cua %d la: %d", A, result);

    

    return 0;
}