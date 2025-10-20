#include <stdio.h>

struct SinhVien {
    int stt;
    char hoTen[50];
    int tuoi;
    char soDienThoai[15];
    char email[50];
};

int main() {
    struct SinhVien danhSach[10] = {
        {1, "Nguyen Van B", 20, "0904484884", "amv@rikkeiacademy.com"},
        {2, "Nguyen Van B", 20, "0904484884", "bnv@rikkeiacademy.com"},
        {3, "Nguyen Van B", 20, "0904484884", "cmv@rikkeiacademy.com"},
        {4, "Nguyen Van B", 20, "0904484884", "dmv@rikkeiacademy.com"},
        {5, "Nguyen Van B", 20, "0904484884", "emv@rikkeiacademy.com"},
        {6, "Nguyen Van B", 20, "0904484884", "fmv@rikkeiacademy.com"},
        {7, "Nguyen Van B", 20, "0904484884", "gmv@rikkeiacademy.com"},
        {8, "Nguyen Van B", 20, "0904484884", "hmv@rikkeiacademy.com"},
        {9, "Nguyen Van B", 20, "0904484884", "imv@rikkeiacademy.com"},
        {10, "Nguyen Van B", 20, "0904484884", "jmv@rikkeiacademy.com"}
    };
    printf("|\tSTT\t|\tHo Ten\t\t|\tTuoi\t|\tSo Dien Thoai\t|\tEmail\t\t\t|\n");
    
    for (int i = 0; i < 10; i++) {
        printf("|\t%d\t|\t%s\t|\t%d\t|\t%s\t|\t%s\t|\n", 
               danhSach[i].stt, 
               danhSach[i].hoTen, 
               danhSach[i].tuoi, 
               danhSach[i].soDienThoai, 
               danhSach[i].email);
        printf("-----------------------------------------------------------------------------------------------------------------\n");
    }

    return 0;
}
