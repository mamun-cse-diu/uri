#include<stdio.h>
int main()
{
    int start,end,sum1,sum2;
    scanf("%d %d",&start,&end);
    sum1=24-start;
    sum2=sum1+end;
    if(sum2<=24){
        printf("O JOGO DUROU %d HORA(S)\n",sum2);
    }
    else{
        sum2=sum2-24;
        printf("O JOGO DUROU %d HORA(S)\n",sum2);
    }
    return 0;
}
