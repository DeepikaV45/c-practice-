#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d\n%d\n%d\n%d",&a,&b,&c,&d);
    if(a%d==0)
    printf("Car 1 goes into road A");
    else if(b%d==0)
    printf("Car 1 goes into road B");
    else if(c%d==0)
    printf("Car 1 goes into road C");
    else
    printf("No path exist");
    return 0;
}
