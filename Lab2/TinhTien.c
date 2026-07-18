//Gia gao = 2, Gia dau = 1.5, ti gia dola =26.29, nhap so luong gao va dau -> tinh tien
#include <stdio.h>

int main(){

    float giaGao = 2;
    float giaDau = 1.5;
    float tiGiaDoLa = 26.29;
    float soLuongGao, soLuongDau;

    printf("Nhap so luong gao: ");
    scanf("%f", &soLuongGao);
    printf("Nhap so luong dau: ");
    scanf("%f", &soLuongDau);

    float tongSoTienGaoVND = soLuongGao * giaGao;
    float tongSoTienDauVND = soLuongDau * giaDau;

    float tongSoTienGaoUSD = tongSoTienGaoVND * tiGiaDoLa;
    float tongSoTienDauUSD = tongSoTienDauVND * tiGiaDoLa;

    float tongSoTienVND = tongSoTienGaoVND + tongSoTienDauVND;
    float tongSoTienUSD = tongSoTienGaoUSD + tongSoTienDauUSD;
    
    printf("Tong so tien VND phai tra la: %.2f\n", tongSoTienVND);
    printf("Tong so tien USD phai tra la: %.2f\n", tongSoTienUSD);

    return 0;
    
}