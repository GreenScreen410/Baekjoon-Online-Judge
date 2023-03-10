#include <stdio.h>

int main() {
    int number;
    char str[3][10] = {"Vaporeon", "Jolteon", "Flareon"};
    
    scanf("%d", &number);
    
    printf("%s", str[++number%3]);
    
    return 0;
}