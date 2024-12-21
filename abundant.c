#include<stdio.h>
int main()
{
    int num,i=1;
    scanf("%d",&num);
    while(i<num)
    i++;
    if(i%2==0)
    printf("Not Abundant Number");
    else
    printf("Abundant Number");
    
    return 0;
}
