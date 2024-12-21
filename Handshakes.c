#include<stdio.h>
int main()
{
	int n;
     scanf("%d",&n);
     int i=1,sum=0;
     for(i=1;i<=n;i++)
     sum+=n-i;
     printf("%d",sum);

    return 0;
}
