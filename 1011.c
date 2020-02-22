#include<stdio.h>
int main()
{
    double r,re;
    scanf("%lf",&r);
    r=r*r*r;
    re=(4.0/3)*(3.14159)*r;
    printf("VOLUME = %.3lf\n",re);
return 0;
}
