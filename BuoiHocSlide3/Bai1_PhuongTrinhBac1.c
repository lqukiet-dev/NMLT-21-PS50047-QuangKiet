#include <stdio.h>

int main(){

    int a, b;
    float x;
    char choice;

    while (1==1){
        printf("Nhap so a: ");
        scanf("%d", &a);
        printf("Nhap so b: ");
        scanf("%d", &b);

        if(a == 0){
            printf("Phuong trinh vo nghiem!\n");
        }
        else{
            x = -(float)b/a;
            printf("Nghiem cua phuong trinh %dx + %d = 0 co nghiem x = %.2f\n", a, b, x);
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