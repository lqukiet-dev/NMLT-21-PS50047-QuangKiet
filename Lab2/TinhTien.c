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

    float tongSoTienGaoUSD = soLuongGao * giaGao;
    float tongSoTienDauUSD = soLuongDau * giaDau;

    float tongSoTienGaoVND = tongSoTienGaoUSD * tiGiaDoLa;
    float tongSoTienDauVND = tongSoTienDauUSD * tiGiaDoLa;

    float tongSoTienVND = tongSoTienGaoVND + tongSoTienDauVND;
    float tongSoTienUSD = tongSoTienGaoUSD + tongSoTienDauUSD;
    
    printf("---Hoa don chi tiet---\n");
    printf("Tong so tien USD phai tra la: %.2f (USD)\n", tongSoTienUSD);
    printf("Tong so tien VND phai tra la: %.2f (VND)\n", tongSoTienVND*1000);

    return 0;
    
}