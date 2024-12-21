#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d\n%d",&x,&y);
    for(int i=1;i<=y;i++)
    {
        printf("%d * %d = %d\n",x,i,(x*i));
    }
    return 0;
}
