#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    printf("Phuong trinh %dx + %db = %.2f\n ", a, b, -1.0*b/a);
    return 0;
}