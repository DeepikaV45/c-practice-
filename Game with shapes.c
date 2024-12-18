#include<stdio.h>
int main()
{
    int rad,len;
    scanf("%d\n%d",&rad,&len);
    int r;
    r=2*rad;
    if(r>len)
    printf("circle cannot be inside a square\n");
    else
    printf("circle can be inside a square\n");
     return 0;
}
