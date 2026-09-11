#include <stdio.h>

int main() {
    float score, total = 0;

    do {
        printf("Enter score (-1 to exit ); ");
        scanf("%f" , &score);
        if (score != -1) {
            total += score;
        }
    } while (score != -1);

    printf("Total score = %.2f\n" , total);
    return 0;
    
}