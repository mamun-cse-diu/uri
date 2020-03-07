#include<stdio.h>
int main()
{
    double salary,sum1,sum2,sum3;
    scanf("%lf",&salary);
    if(salary<=2000.00){
        printf("Isento\n");
    }
    else if(salary>=2000.01 && salary<=3000.00){
        salary=salary-2000.00;
        salary=.08*salary;
        printf("R$ %.2lf\n",salary);
    }
    else if(salary>=3000.01 && salary<=4500.00){
        sum1=salary-2000.00;
        if(sum1<=1000.00){
            sum1=.08*sum1;
            printf("R$ %.2lf\n",sum1);
        }
        else{
            sum2=sum1-1000.00;
            sum3=sum1-sum2;
            sum3=sum3*.08;
            sum2=sum2*0.18;
            sum3=sum3+sum2;
            printf("R$ %.2lf\n",sum3);
        }
    }
    else if(salary>4500.00){
        sum1=salary-2000.00;
        sum2=sum1-1000.00;
        sum3=sum2-1500.00;
        sum3=sum3*.28;
        sum2=1000.00*.08;
        sum1=1500.00*.18;
        sum3=sum1+sum2+sum3;
        printf("R$ %.2lf\n",sum3);
    }
    return 0;
}
