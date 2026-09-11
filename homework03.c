#include <stdio.h>

int main() {
    int rows = 5;

    for (int i= 1; i <= rows; i++) {
        //พิมพ์ช่องว่างเพื่อจัดตรงกลาง
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        //พิมพ์ดาวตามจำนวนในแต่ละขั้น (1, 3, 5, 7, 9)
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");

    }
    return 0;
}