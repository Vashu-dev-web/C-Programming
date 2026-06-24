#include <stdio.h>

int main() {
    int A, B, C;

    printf("Enter the value of A, B and C: ");
    scanf("%d %d %d", &A, &B, &C);

    if (A > 0 && B > 0 && C > 0 && A + B + C == 180) {
        printf("Triangle is valid");
    }
    else {
        printf("Triangle is not valid");
    }

    return 0;
}