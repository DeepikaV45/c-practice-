#include<stdio.h>
int main()
{
     int a,b,c,d;
     scanf("%d\n%d\n%d",&a,&b,&c);
     b=b*75;     //150
     c=c*30;     //90
     d=b+c;      //240
     if(a>d)
     printf("Boat is stable");
     else
     printf("Boat will drown");
     return 0; 
}
