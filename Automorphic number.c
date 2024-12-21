#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    y=x*x;
    if(x>0){
        if(x==y)
        printf("Automorphic Number");
        else
        printf("Not Automorphic Number");
    }
    else
    printf("Invalid input");
    return 0;
}
