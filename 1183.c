#include<stdio.h>
int main()
{
    int i,j,n;
    char a;
    double sum=0,avg,x[12][12];
    scanf("%c",&a);
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%lf",&x[i][j]);
        }
    }
    n=1;
    for(i=0; i<12; i++){
        for(j=n; j<12; j++){
            sum = sum+x[i][j];
        }
        n++;
    }
    if(a=='S')
        printf("%.1lf\n",sum);
    else if(a=='M'){
        avg = sum/66;
        printf("%.1lf\n",avg);
    }
    return 0;
}
