#include <stdio.h>

void update(int *x,int *y) {
    // Complete this function    
    int t = *x;
    *x = *x + *y;
    *y = abs(t - *y);
    
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
