#include<stdio.h>
int main()
{
    int a,b,c;
    double i,j;
    scanf("%lf",&i);
    a=i/100;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",a);
    a=i-(100*a);
    b=a/50;
    printf("%d nota(s) de R$ 50.00\n",b);
    b=a-(50*b);
    a=b/20;
    printf("%d nota(s) de R$ 20.00\n",a);
    a=b-(20*a);
    b=a/10;
    printf("%d nota(s) de R$ 10.00\n",b);
    b=a-(10*b);
    a=b/5;
    printf("%d nota(s) de R$ 5.00\n",a);
    a=b-(5*a);
    b=a/2;
    printf("%d nota(s) de R$ 2.00\n",b);
        a=a%2;
        a=a/1;
        printf("MOEDAS:\n");
        printf("%d moeda(s) de R$ 1.00\n",a);
        c=i;
        c=c*100;
        j=i*100;
        c=j-c;
        a=c/50;
        printf("%d moeda(s) de R$ 0.50\n",a);
        c=c%50;
        a=c/25;
        printf("%d moeda(s) de R$ 0.25\n",a);
        c=c%25;
        a=c/10;
        printf("%d moeda(s) de R$ 0.10\n",a);
        c=c%10;
        a=c/5;
        printf("%d moeda(s) de R$ 0.05\n",a);
        c=c%5;
        a=c/1;
        printf("%d moeda(s) de R$ 0.01\n",a);
    return 0;
}
