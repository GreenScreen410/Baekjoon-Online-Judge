#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N - 1; i++) {
        printf(" ");
    }
    printf("*\n");

    for (int i = 2; i <= N; i++) {
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        printf("*");

        for (int k = 1; k <= (i - 1) * 2 - 1; k++) {
            printf(" ");
        }
        printf("*\n");
    }
    
    return 0;
}