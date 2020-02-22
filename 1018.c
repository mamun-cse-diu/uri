#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d",&i);
    printf("%d\n",i);
    a=i/100;
    printf("%d nota(s) de R$ 100,00\n",a);
    a=i-(100*a);
    b=a/50;
    printf("%d nota(s) de R$ 50,00\n",b);
    b=a-(50*b);
    a=b/20;
    printf("%d nota(s) de R$ 20,00\n",a);
    a=b-(20*a);
    b=a/10;
    printf("%d nota(s) de R$ 10,00\n",b);
    b=a-(10*b);
    a=b/5;
    printf("%d nota(s) de R$ 5,00\n",a);
    a=b-(5*a);
    b=a/2;
    printf("%d nota(s) de R$ 2,00\n",b);
    b=a-(2*b);
    a=b/1;
    printf("%d nota(s) de R$ 1,00\n",a);
    return 0;
}
