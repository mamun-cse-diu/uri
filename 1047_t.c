#include<stdio.h>
int main()
{
    int start_h,start_m,end_h,end_m,min,sum;
    scanf("%d %d %d %d",&start_h,&start_m,&end_h,&end_m);
    min=(end_h*60+end_m)-(start_h*60+start_m);
    if(min<=0)
        min = min+1440;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",min/60,min%60);
    return 0;

}
