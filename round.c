#include<stdio.h>
#include<math.h>
int main()
{
    float a;
    //scanf("%f",&a);
    printf("Enter a float value\n");
     scanf("%f",&a);
     printf("%d\n",(int)a);
     printf("%.1f\n",ceil(a));
     printf("%.1f",floor(a));
    return 0;
}
