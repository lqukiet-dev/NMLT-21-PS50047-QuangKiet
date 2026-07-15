#include <stdio.h>
int main() {
    char MSSV[20];
    char hoTen[50];
    int namSinh;
    int tuoi;
    float diemTrungBinh;

    //Nhap du lieu
    printf("Nhap ho ten sinh vien: ");
    scanf("%[^\n]", hoTen);
    printf("Nhap MSSV: ");
    scanf("%s", MSSV);
    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);
    printf("Nhap diem trung binh: ");
    scanf("%f", &diemTrungBinh);
    tuoi = 2026 - namSinh;

    //Xuat du lieu
    printf("\n");
    printf("Ma so sinh vien: %s\n", MSSV);
    printf("Ho va ten: %s\n", hoTen);
    printf("Nam sinh: %d\n", namSinh);
    printf("Tuoi: %d\n", tuoi);
    printf("Diem trung binh: %.2f\n", diemTrungBinh);
    
    return 0;
}