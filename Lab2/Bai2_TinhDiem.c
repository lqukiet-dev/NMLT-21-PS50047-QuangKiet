#include <stdio.h>

int main() {
    int toan, ly, hoa;
    float diemTrungBinh;

    printf("Nhap diem Toan: ");
    scanf("%d", &toan);
    
    printf("Nhap diem Ly: ");
    scanf("%d", &ly);
    
    printf("Nhap diem Hoa: ");
    scanf("%d", &hoa);
 
    diemTrungBinh = (float)(toan * 3 + ly * 2 + hoa) / 6;

    printf("\nDiem trung binh cua ban la: %.2f\n", diemTrungBinh);

    return 0;
}