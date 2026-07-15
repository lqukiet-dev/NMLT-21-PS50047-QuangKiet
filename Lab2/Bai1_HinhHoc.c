#include <stdio.h>
#define PI 3.14159

int main() {
    float chieuDai, chieuRong;
    
    printf("Nhap chieu dai chu nhat: ");
    scanf("%f", &chieuDai);
    printf("Nhap chieu rong chu nhat: ");
    scanf("%f", &chieuRong);
    
    float chuViCN = (chieuDai + chieuRong) * 2;
    float dienTichCN = chieuDai * chieuRong;
    
    printf("Chu vi hinh chu nhat: %.2f\n", chuViCN);
    printf("Dien tich hinh chu nhat: %.2f\n\n", dienTichCN);
    
    float banKinh;
    
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &banKinh);
    
    float chuViHT = 2 * PI * banKinh;
    float dienTichHT = PI * banKinh * banKinh;
    
    printf("Chu vi hinh tron: %.2f\n", chuViHT);
    printf("Dien tich hinh tron: %.2f\n", dienTichHT);

    return 0;
}