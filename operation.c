#include<stdio.h>
int main()
{
    int a,b,add,sub,mul,mod,divs;
    scanf("%d\n%d",&a,&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    mod=a%b;
    divs=a/b;
    printf("%d\n%d\n%d\n%d\n%d",add,sub,mul,mod,divs);
    
    return 0;
}
