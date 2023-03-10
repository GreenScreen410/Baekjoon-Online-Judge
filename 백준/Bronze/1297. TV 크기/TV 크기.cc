#include <iostream>
#include <cmath>

using namespace std;
 
int main() {
    int D, H, W;
    double c, t1, t2;
    
    scanf("%d %d %d", &D, &H, &W);
    
    c = sqrt(H * H + W * W);
    t1 = H * D / c;
    t2 = W * D / c;
 
    printf("%d %d\n", (int)t1, (int)t2);
    return 0;
}