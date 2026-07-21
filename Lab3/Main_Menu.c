#include <stdio.h>
#include <math.h>
#include <string.h>

void tinhHocLucSV(){

    float diemSV;
    char hocLuc[20];

    do{
        printf("Nhap diem so cua sinh vien: ");
        scanf("%f", &diemSV);
        
        if(diemSV < 0 || diemSV > 10){
            printf("Diem so nhap vao khong hop le, vui long nhap lai!\n");
        }
    }while (diemSV < 0 || diemSV > 10);

    if(diemSV >= 9){
        strcpy(hocLuc, "Xuat sac");
    }
    else if (diemSV < 9 && diemSV >= 8){
        strcpy(hocLuc, "Gioi");
    }
    else if (diemSV < 8 && diemSV >= 6.5){
        strcpy(hocLuc, "Kha");
    }
    else if (diemSV < 6.5 && diemSV >= 5){
        strcpy(hocLuc, "Trung binh");
    }
    else if (diemSV < 5 && diemSV >= 3.5){
        strcpy(hocLuc, "Yeu");
    }
    else{
        strcpy(hocLuc, "Kem");
    }

    printf("Sinh vien co diem so %.2f duoc xep loai hoc luc %s\n", diemSV, hocLuc);
}

void giaiPhuongTrinhBac2(){

    int a, b, c;
    float x, delta;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    printf("Nhap so c: ");
    scanf("%d", &c);

    if(a == 0){
        printf("Vi a = 0 nen day la phuong trinh bac 1: %dx + %d = 0\n", b, c);
        if(b == 0 && c == 0){
            printf("Vi b va c deu bang 0 nen phuong trinh co vo so nghiem x!\n");
        }
        else if(b == 0 && c != 0){
            printf("Vi b = 0 nhung c khac 0 nen phuong trinh vo nghiem!\n");
        }
        else{
            x = -(float)c/b;
            printf("Phuong trinh co nghiem duy nhat:\nx = -c/b = %.2f\n", x);
        }
    }
    else{
        delta = (float)(b * b) - (4 * a * c);
        printf("Phuong trinh %dx^2 + %dx + %d = 0 co delta = b^2 - 4ac = %.2f\n", a, b, c, delta);
        if (delta < 0) {
            printf("delta < 0 nen phuong trinh %dx^2 + %dx + %d = 0 vo nghiem!\n", a, b, c);
        } 
        else if (delta == 0) {
            x = -(float)b / (2 * a);
            if(x == 0){
                x = 0;
            }
            printf("delta = 0 nen phuong trinh %dx^2 + %dx + %d = 0 co nghiem kep:\nx1 = x2 = %.2f\n", a, b, c, x);
        } 
        else { 
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            if(x1 == 0){
                x1 = 0;
            }
            if(x2 == 0){
                x2 = 0;
            }
            printf("delta > 0 nen phuong trinh %dx^2 + %dx + %d = 0 co 2 nghiem phan biet:\n", a, b, c);
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }
}

//Nhap so dien duong (+), tach so dien theo bac (vd 250 so thì tach ra 50 so bac 1, 50 so bac 2, 100 so bac 3 và 50 so bac 4), tien dien hien thi so tien theo tung bac va tong so tien VND.
//soDien la tong so dien tieu thu, phanDu la so dien tai bac cao nhat (vd soDien 250 thì phanDu la 250 - 200)
void tinhTienDien(){

    int soDien, phanDu;
    float tongTien;

    do{
        printf("Nhap tong so kWh dien tieu thu: ");
        scanf("%d", &soDien);
        if(soDien < 0){
            printf("So dien khong hop le, vui long nhap so duong!\n");
        }
    }while (soDien < 0);
    
    if(soDien <= 50){
        phanDu = soDien;
        tongTien = 1678 * soDien;
    }
    else if(soDien <= 100){
        phanDu = soDien - 50;
        tongTien = (1678 * 50) + (1734 * phanDu);
    }
    else if (soDien <= 200){
        phanDu = soDien - 100;
        tongTien = (1678 * 50) + (1734 * 50) + (2014 * phanDu);
    }
    else if (soDien <= 300){
        phanDu = soDien - 200;
        tongTien = (1678 * 50) + (1734 * 50) + (2014 * 100) + (2536 * phanDu);
    }
    else if (soDien <= 400){
        phanDu = soDien - 300;
        tongTien = (1678 * 50) + (1734 * 50) + (2014 * 100) + (2536 * 100) + (2834 * phanDu);
    }
    else{
        phanDu = soDien - 400;
        tongTien = (1678 * 50) + (1734 * 50) + (2014 * 100) + (2536 * 100) + (2834 * 100) + (2927 * phanDu);
    }
    
    printf("+---Hoa don tien dien---+\n");
    printf("Voi tong so dien la %d kWh thi tong so tien phai thanh toan la : %.2f VND\n", soDien, tongTien);
}

int main(){

    int chon;
    
    do{
        printf("+-------------------------------------------------+\n");
        printf("|              MENU CHUONG TRINH LAB 3            |\n");
        printf("+-------------------------------------------------+\n");
        printf("| 1. Chuc nang tinh hoc luc sinh vien             |\n");
        printf("| 2. Chuc nang giai phuong trinh bac 2            |\n");
        printf("| 3. Chuc nang tinh tien dien tieu thu hang thang |\n");
        printf("| 4. Thoat chuong trinh                           |\n");
        printf("+-------------------------------------------------+\n");
        printf(">> Chon chuc nang cua ban (1-4): ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
            printf("Ban da chon chuc nang 1: Tinh hoc luc sinh vien\n");
            tinhHocLucSV();
            break;
        case 2:
            printf("Ban da chon chuc nang 2: Giai phuong trinh bac 2\n");
            giaiPhuongTrinhBac2();
            break;
        case 3:
            printf("Ban da chon chuc nang 3: Tinh tien dien tieu thu hang thang\n");
            tinhTienDien();
            break;
        case 4:
            printf("Ban da chon thoat chuong trinh!\n");
            break;
        default:
            printf("Ban phai chon chuc nang (1-4)!\n");
            break;
        }
        if(chon != 4){
            printf("------------Chuong trinh da thuc thi!--------------\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        }
    }while (chon != 4);
    
    return 0;
}