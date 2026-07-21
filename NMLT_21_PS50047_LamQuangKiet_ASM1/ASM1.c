#include<stdio.h>

int main(){

    int chon;
    
    do{
        printf("+-------------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH ASM 1            |\n");
        printf("+-------------------------------------------------+\n");
        printf("| 1. Chuc nang kiem tra so nguyen                 |\n");
        printf("| 2. Chuc nang tim uoc so chung va boi so chung   |\n");
        printf("| 3. Chuc nang tinh tien cho quan karaoke         |\n");
        printf("| 4. Chuc nang tinh tien dien                     |\n");
        printf("| 5. Chuc nang doi tien                           |\n");
        printf("| 6. Chuc nang tinh lai suat vay ngan hang tra gop|\n");
        printf("| 7. Chuc nang vay tien mua xe                    |\n");
        printf("| 8. Chuc nang sap xep thong tin sinh vien        |\n");
        printf("| 9. Chuc nang game FPOLY-LOTT                    |\n");
        printf("| 10. Chuc nang tinh toan phan so                 |\n");
        printf("| 11. Thoat chuong trinh                          |\n");
        printf("+-------------------------------------------------+\n");
        printf(">> Chon chuc nang cua ban (1-11): ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
            printf("Ban da chon chuc nang 1:\nKiem tra so nguyen\n");
            break;
        case 2:
            printf("Ban da chon chuc nang 2:\nTim uoc so chung va boi so chung cua 2 so\n");
            break;
        case 3:
            printf("Ban da chon chuc nang 3:\nTinh tien cho quan Karaoke\n");
            break;
        case 4:
            printf("Ban da chon chuc nang 4:\nTinh tien dien\n");
            break;
        case 5:
            printf("Ban da chon chuc nang 5:\nDoi tien\n");
            break;
        case 6:
            printf("Ban da chon chuc nang 6:\nTinh lai suat vay ngan hang tra gop\n");
            break;
        case 7:
            printf("Ban da chon chuc nang 7:\nVay tien mua xe\n");
            break;
        case 8:
            printf("Ban da chon chuc nang 8:\nSap xep thong tin sinh vien\n");
            break;
        case 9:
            printf("Ban da chon chuc nang 9:\nGame FPOLY_LOTT\n");
            break;
        case 10:
            printf("Ban da chon chuc nang 10:\nTinh toan phan so\n");
            break;
        case 11:
            printf("Ban da chon thoat chuong trinh!\n");
            break;
        default:
            printf("Ban phai chon chuc nang (1-11)!\n");
            break;
        }
        if(chon != 11 && chon >=1 && chon <= 10){
            printf("------------Chuong trinh da thuc thi!--------------\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        }
    }while (chon != 11);
    
    return 0;
}