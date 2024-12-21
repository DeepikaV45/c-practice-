#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if(x>=65&&x<=90)
    printf("Upper");
    else if(x>=97&&x<122)
    printf("Lower");
    else
    printf("Symbol");
    return 0;
}
