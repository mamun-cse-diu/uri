#include<stdio.h>
int main()
{
    int i;
    double n,x[100];
    scanf("%lf",&n);
    i=0;
    x[i]=n;
    for(i=1; i<100; i++){
        x[i]=n/2;
        n=x[i];
    }

    for(i=0; i<100; i++){
        printf("N[%d] = %.4lf\n",i,x[i]);
    }
    return 0;
}
