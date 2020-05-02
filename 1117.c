#include<stdio.h>
int main()
{
    float scor,sum=0,avg;
    int n=2;
    while(n!=0){
        scanf("%f",&scor);
        if(scor>=0.0 && scor<=10.0){
            sum = sum+scor;
            n--;
        }
        else
           printf("nota invalida\n");
    }
    avg = sum/2;
    printf("media = %.2f\n",avg);
    return 0;
}
