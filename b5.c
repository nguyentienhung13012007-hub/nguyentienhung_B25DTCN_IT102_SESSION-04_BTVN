#include <stdio.h>

int main() {
    double soCu, soMoi;
    double soDien, tien ;
    int bac;


    printf("Nhap chi so cu: ");
    scanf("%lf", &soCu);
    printf("Nhap chi so moi: ");
    scanf("%lf", &soMoi);


    if (soMoi < soCu) {
        printf("Loi: Chi so moi phai lon hon hoac bang chi so cu!\n");
        return 1;
    }

    soDien = soMoi - soCu;

 
    if (soDien < 50)
        bac = 1;
    else if (soDien < 100)
        bac = 2;
    else if (soDien < 150)
        bac = 3;
    else if (soDien < 200)
        bac = 4;
    else
        bac = 5;

  
    switch (bac) {
        case 1:
            tien = soDien * 10000;
            break;
        case 2:
            tien = soDien * 15000;
            break;
        case 3:
            tien = soDien * 20000;
            break;
        case 4:
            tien = soDien * 25000;
            break;
        case 5:
            tien = soDien * 30000;
            break;
        default:
            printf("Khong xac dinh duoc bac dien!\n");
            return 1;
    }


    printf("\nSo dien tieu thu: %.2lf kWh\n", soDien);
    printf("So tien phai tra la: %.2lf VND\n", tien);

    return 0;
}

