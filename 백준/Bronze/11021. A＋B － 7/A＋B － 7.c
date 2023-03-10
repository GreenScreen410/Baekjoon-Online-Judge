#include <stdio.h>

int main() {
    int amount, A, B;
    
    scanf("%d", &amount);
    
    for (int i = 0; i < amount; i++) {
        scanf("%d %d", &A, &B);
        printf("Case #%d: %d\n", i + 1, A + B);
    }
    
    return 0;
}