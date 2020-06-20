#include<stdio.h>
int main()
{
    int n,p,q,sum=0;
    char c;
    scanf("%d",&n);
    scanf("%d %c %d",&p,&c,&q);
    if(c=='+')
        sum=p+q;
    else if(c=='*')
        sum=p*q;
    if(sum>n)
        printf("OVERFLOW\n");
    else
        printf("OK\n");

    return 0;
}
