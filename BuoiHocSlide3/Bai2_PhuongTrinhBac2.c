#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c;
    float x, delta;
    char choice;

    while (1==1){
        printf("Nhap so a: ");
        scanf("%d", &a);
        printf("Nhap so b: ");
        scanf("%d", &b);
        printf("Nhap so c: ");
        scanf("%d", &c);

        if(a == 0){
            printf("Vi a = 0 nen day khong phai phuong trinh bac 2!\n");
        }
        else{
            delta = (float)(b * b) - (4 * a * c);
            
            if (delta == 0) {
                x = -(float)b / (2 * a);
                printf("Phuong trinh co nghiem kep x1 = x2 = %.2f\n", x);
            } 
            else if (delta > 0) {
                float x1 = (-b + sqrt(delta)) / (2 * a);
                float x2 = (-b - sqrt(delta)) / (2 * a);
                
                printf("Phuong trinh co 2 nghiem phan biet:\n");
                printf("x1 = %.2f\n", x1);
                printf("x2 = %.2f\n", x2);
            } 
            else {
                printf("Phuong trinh vo nghiem\n");
            }
        }

        printf("Ban co muon chay chuong trinh tiep khong (Y/N)? ");
        scanf(" %c", &choice);

        if(choice == 'N' || choice == 'n'){
        break;
        }
        printf("\n-------------------------\n");
    }
    return 0;
}