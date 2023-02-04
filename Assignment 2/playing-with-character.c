#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char a;
    char s[20];
    char sen[500];
    
    scanf("%c",&a);
    scanf("%s",&s);
    scanf("\n");
    scanf("%[^\n]%*c",&sen);
    printf("%c", a);
    printf("\n");
    printf("%s",s);
    printf("\n");
    printf("%s",sen);
      
    return 0;
}
