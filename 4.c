#include<stdio.h>
int main(int argc, char const *argv[])
{
    int toan, van, anh;
    printf("nhap diem toan: ");
    scanf("%d", &toan);
    printf("nhap diem van: ");
    scanf("%d", &van);
    printf("nhap diem anh: ");
    scanf("%d", &anh);
    float diemtrungbinh = (toan + van + anh) / 3.0;
    float tongtdiem = toan + van + anh;
    printf("diem trung binh la: %.2f\n", diemtrungbinh);
    printf("tong diem la: %.2f\n", tongtdiem);
    return 0;
}
