#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d){
    
    if(a>b && a>c && a>d){
        printf("%d", a);
    }
    else if(b>a && b>c && b>d){
        printf("%d", b);
    }
    else if(c>b && c>a && c>d){
        printf("%d", c);
    }
    else{
        printf("%d", d);
    }
    return 0 ;
}
int main() {
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    int ans = max_of_four(a, b, c, d);
    
    return 0;
}
