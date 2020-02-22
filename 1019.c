#include<stdio.h>
int main()
{
    int i,a,b,c;
    scanf("%d",&i);
    a=i/3600;
    printf("%d:",a);
    b=i-(a*3600);
    a=b/60;
    printf("%d:",a);
    c=b-(a*60);
    printf("%d\n",c);
    return 0;
}
