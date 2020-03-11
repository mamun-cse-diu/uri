#include<stdio.h>
int main()
{
    int n;
    double num,num1,num2,avg;
    scanf("%d",&n);
    while(n!=0){
        scanf("%lf %lf %lf",&num,&num1,&num2);
        avg=((num*2)+(num1*3)+(num2*5))/10;
        printf("%.1lf\n",avg);
        n--;
    }
    return 0;
}
