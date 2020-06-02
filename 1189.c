#include<stdio.h>
int main()
{
    double N[12][12],sum=0.0;
    char O;
    scanf("%c",&O);
    int n,m,i,j;
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
            scanf("%lf",&N[i][j]);
        }
    }
    n=1;
    m=5;
    for(i = 1;i < 11;i++){
        if(i<6){
            for(j = 0;j <n;j++){
                sum += N[i][j];
            }
            n++;
        }
        else{
            for(j = 0;j <m;j++){
                sum += N[i][j];
            }
            m--;
        }
    }
    if (O=='S')
        printf("%.1lf\n",sum);
    else
        printf("%.1lf\n",sum/30.0);
    return 0;
}
