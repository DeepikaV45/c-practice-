#include<stdio.h>
int main()
{
    int dollar1,cent1,dollar2,cent2;
    scanf("%d",&dollar1);
    scanf("%d",&cent1);
    scanf("%d",&dollar2);
    scanf("%d",&cent2);
    int totalCents=cent1+cent2;
    int totalDollars=dollar1+dollar2+(totalCents/100);
    totalCents=totalCents%100;
    printf("%d\n",totalDollars);
    printf("%d\n",totalCents);
}
