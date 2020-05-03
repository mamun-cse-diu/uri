#include<stdio.h>
int main()
{
    float x,sum,avg;
    int a=0;
    sum=0;
    while(1){
        scanf("%f",&x);
        if(x>=0.0 && x<=10.0){
            if(x==1){
                printf("novo calculo (1-sim 2-nao)\n");
                a=0;
                sum=0;
            }
            else if(x==2){
                printf("novo calculo (1-sim 2-nao)\n");
                break;
            }
            else if(a!=2){
                sum = sum+x;
                a++;
            }
            if(a>2)
                printf("novo calculo (1-sim 2-nao)\n");

            if(a==2){
                avg = sum/2;
                printf("media = %.2f\n",avg);
                a++;
            }
        }
        else
            printf("nota invalida\n");
    }
}
