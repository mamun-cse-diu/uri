#include<stdio.h>
int main()
{
    int n,a,b;
    float i,j=1;
    for(i=0; i<=2.01; i=i+.2){
        n=3;
        for(j=1; j<=3; j++){
            if(i>0.0 && i<1.0){
                printf("I=%.1f J=%.1f\n",i,j+i);
            }
            else if(i>1.0 && i<2.0)
                printf("I=%.1f J=%.1f\n",i,j+i);
            else{
                a=i;
                b=j+a;
                printf("I=%d J=%d\n",a,b);
            }
        }
    }
    return 0;
}
