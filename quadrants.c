#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d\n%d",&x,&y);
    if(x>0&&y>0)
    printf("Ist Quadrant");
    else if(x<0&&y>0)
    printf("IInd Quadrant");
    else if(x<0&&y<0)
    printf("IIIrd Quadrant");
    else if(x>0&&y<0)
    printf("IVth Quadrant");
    else if(x==0&&y==0)
    printf("Origin");
    return 0;
}
