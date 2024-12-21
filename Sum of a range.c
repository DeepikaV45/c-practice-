#include<stdio.h>
int main()
{
    //fill the code
    int start,end,sum;
    scanf("%d\n%d",&start,&end);
    sum=0;
    while(start<=end){
        sum+=start;
        start++;
        
    }
    printf("%d",sum);
    return 0;
}
