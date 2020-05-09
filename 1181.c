#include<stdio.h>
int main()
{
    int n,i,j;
    char a;
    double sum=0,avg,x[12][12];
    scanf("%d %c",&n,&a);
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%lf",&x[i][j]);
        }
    }
    for(i=0; i<12; i++){
        sum = sum+x[n][i];
    }
    if(a=='S')
        printf("%.1lf\n",sum);
    else if(a=='M'){
        avg = sum/12;
        printf("%.1lf\n",avg);
    }
    return 0;
}
