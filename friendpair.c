#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d\n%d",&a,&b);
    int sum=0,i;
    for(i=1;i<=a&b;i++)
    {
        if(a&b%i==0)
        sum=sum+i;

    }
    if(sum==a&&sum==b)
    printf("Friendly Pair");
    else
    printf("Not Friendly Pair");
    return 0;
}
