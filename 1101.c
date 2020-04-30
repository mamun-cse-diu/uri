#include<stdio.h>
int main()
{
    int n1,n2,sum,i;
    while(1){
        scanf("%d %d",&n1,&n2);
        if(n1<=0 || n2<=0)
            break;
        sum=0;
        if(n1>n2){
            for(i=n2; i<=n1; i++){
                printf("%d ",i);
                sum = sum+i;
            }
            printf("Sum=%d\n",sum);
        }
        else{
            for(i=n1; i<=n2; i++){
                printf("%d ",i);
                sum = sum+i;
            }
            printf("Sum=%d\n",sum);
        }
    }
    return 0;
}
