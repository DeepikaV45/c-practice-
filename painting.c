#include<stdio.h>
int main()
{
    int lwall,bwall;
    int lfirst,bfirst;
    int lsecond,bsecond;
    scanf("%d\n%d\n%d\n%d\n%d\n%d",&lwall,&bwall,&lfirst,&bfirst,&lsecond,&bsecond);
    int len=lfirst+lsecond;
    int bre=bfirst+bsecond;
    if(len<lwall&&bre<bwall){
    printf("Raj can fix both painting");
}    else{
    printf("Raj cannot fix both painting");
    }
    return 0;
}
