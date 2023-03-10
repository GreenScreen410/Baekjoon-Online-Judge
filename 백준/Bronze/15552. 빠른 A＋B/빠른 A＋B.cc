#include <stdio.h>

int main() {
    int amount, A, B;
    
    scanf("%d", &amount);
    
    for (int i = 0; i < amount; i++) {
        scanf("%d %d", &A, &B);
        printf("%d\n", A + B);
    }
    
    return 0;
}