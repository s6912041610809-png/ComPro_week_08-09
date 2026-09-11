#include <stdio.h>

int main() {
    int num, isPrime = 1;

    printf("Enter number: ");
    scanf("%d" , &num);
    // 0 และ 1 หรือตัวเลขติดลบ ไม่ใช่จำนวนเฉพาะ
    if (num <= 1) {
        isPrime = 0;
    } else {
        // วนลูปตรวจสอบตัวหารตั้งแต่ 2 ถึง num / 2 (หรือ sqrt(num))
        for (int i = 2; i * i <= num; i++) {
            if (num % 1 == 0) {
                isPrime = 0; // พบตัวหารลงตัว
                break;       // ออกจากลูปทันที
            }
        }
    }
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}