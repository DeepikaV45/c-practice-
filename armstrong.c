#include<stdio.h>
int main()
{
    int n,sum=0,a,temp;
    scanf("%d",&n);
    temp=n;
    while(n<0)
    {
       a=n%10;
       sum=sum+(a*a*a);
       n=sum;
       temp=sum;
       n=n/10;
    }
    if(temp==sum)
    printf("Armstrong Number");
    else
    printf("Not Armstrong Number");
    return 0;
}
