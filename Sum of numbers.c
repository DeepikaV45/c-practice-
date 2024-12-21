#include<stdio.h>
int main()
{
    //fill the code
    int n,sum=0;
    
    do{
        scanf("%d",&n);
        if(n==-1)
        break;
        sum+=n;
    }
    while(1);
    printf("%d",sum);
    return 0;
}
