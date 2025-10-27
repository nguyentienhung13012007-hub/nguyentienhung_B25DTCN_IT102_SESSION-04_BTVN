#include<stdio.h>


int main() {
    float x, y, S, Z;

    printf("Nhap so dien dau thang: ");
    scanf("%f", &x);
    printf("Nhap so dien cuoi thang: ");
    scanf("%f", &y);


    S = y - x;

    if (S >= 0 && S < 50) {
        Z = S * 10000;
    } else if (S >= 50 && S < 100) {
        Z = S * 15000;
    } else if (S >= 100 && S < 150) {
        Z = S * 20000;
    } else if (S >= 150 && S < 200) {
        Z = S * 25000;
    } else {
        Z = S * 30000;
    }

    printf("So dien tieu thu: %.0f kWh\n", S);
    printf("Tien dien la: %.0f VND\n", Z);

    return 0;
}

