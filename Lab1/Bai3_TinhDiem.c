#include <stdio.h>
int main() {
    char MSSV[20];
    char hoTen[50];
    float diemTrungBinh;
    float diemToan;
    float diemLy;
    float diemHoa;

    //Nhap du lieu
    printf("Nhap ho ten sinh vien: ");
    scanf("%[^\n]", hoTen);
    printf("Nhap MSSV: ");
    scanf("%s", MSSV);
    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);
    printf("Nhap diem Ly: ");
    scanf("%f", &diemLy);
    printf("Nhap diem Hoa: ");
    scanf("%f", &diemHoa);
    diemTrungBinh = (diemToan*2 + diemLy + diemHoa)/4;

    //Xuat du lieu
    printf("\n");
    printf("Ma so sinh vien: %s\n", MSSV);
    printf("Ho va ten: %s\n", hoTen);
    printf("Diem trung binh: %.2f\n", diemTrungBinh);
    
    return 0;
}