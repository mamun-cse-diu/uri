#include<stdio.h>
int main()
{
    double sel,per,sum;
    scanf("%lf",&sel);
    if(sel<=400.00){
        per=sel*0.15;
        sum=sel+per;
        printf("Novo salario: %.2lf\n",sum);
        printf("Reajuste ganho: %.2lf\n",per);
        printf("Em percentual: 15 %%\n");
    }
    else if(sel>=400.01 && sel<=800.00){
        per=sel*0.12;
        sum=sel+per;
        printf("Novo salario: %.2lf\n",sum);
        printf("Reajuste ganho: %.2lf\n",per);
        printf("Em percentual: 12 %%\n");
    }
    else if(sel>=800.01 && sel<=1200.00){
        per=sel*0.10;
        sum=sel+per;
        printf("Novo salario: %.2lf\n",sum);
        printf("Reajuste ganho: %.2lf\n",per);
        printf("Em percentual: 10 %%\n");
    }
    else if(sel>=1200.01 && sel<=2000.00){
        per=sel*0.07;
        sum=sel+per;
        printf("Novo salario: %.2lf\n",sum);
        printf("Reajuste ganho: %.2lf\n",per);
        printf("Em percentual: 7 %%\n");
    }
    else if(sel>2000.00){
        per=sel*0.04;
        sum=sel+per;
        printf("Novo salario: %.2lf\n",sum);
        printf("Reajuste ganho: %.2lf\n",per);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
