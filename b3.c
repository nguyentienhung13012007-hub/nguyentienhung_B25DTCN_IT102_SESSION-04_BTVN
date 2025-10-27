#include <stdio.h>

int main() {
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0) {
        printf("Chia het cho ca 3 va 5\n");
    } else if (n % 3 == 0) {
        printf("Chia het cho 3\n");
    } else if (n % 5 == 0) {
        printf("Chia het cho 5\n");
    } else {
        printf("Khong chia het cho 3 hoac 5\n");
    }

    return 0;
}

