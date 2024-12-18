#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    scanf("%d\n%d\n%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("%d is greater\n",a);
    else if(b>a&&b>c)
    printf("%d is greater\n",b);
    else
    printf("%d is greater\n",c);
    return 0;
}
