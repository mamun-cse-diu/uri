#include<stdio.h>
int main()
{
    int a,b,i;
    float c,d,e=0;;
    i=0;
    while(i!=2){
        scanf("%d %d %f",&a,&b,&c);
        d=b*c;
        e=e+d;
        i++;
    }
    printf("VALOR A PAGAR: R$ %.2f\n",e);
return 0;
}
