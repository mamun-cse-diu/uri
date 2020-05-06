#include<stdio.h>
int main()
{
    int n,i,j=1,k=0,sum=0;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        if(i<n-1){
            printf("%d ",sum);
            sum = k+j;
            j=k;
            k=sum;
        }
        else{
            printf("%d\n",k);
        }
    }
    return 0;
}
