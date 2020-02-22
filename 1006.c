#include<stdio.h>
int main()
{
    double avr,a,b,c;
    scanf("%lf %lf %lf", &a,&b,&c);
    avr=((a*2)+(b*3)+(c*5))/10;
    printf("MEDIA = %.1lf\n",avr);
    return 0;
}
