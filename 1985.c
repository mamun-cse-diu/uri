#include<stdio.h>
int main() {

     int t,i;
     scanf("%d",&t);
     double sum=0.0;
     for(i=0; i<t;i++)
     {
         int n,m;
         scanf("%d %d",&n,&m);
         if(n==1001)
         sum=sum+(m*1.50);
         if(n==1002)
         sum=sum+(m*2.50);
         if(n==1003)
         sum=sum+(m*3.50);
         if(n==1004)
         sum=sum+(m*4.50);
         if(n==1005)
         sum=sum+(m*5.50);
     }
     printf("%.2lf\n",sum);

    return 0;
}
