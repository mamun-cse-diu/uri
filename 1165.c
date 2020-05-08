#include<stdio.h>
int main()
{
    int i,n,num,j;
    scanf("%d",&n);
    while(n!=0){
        scanf("%d",&num);
        j=0;
        for(i=2; i<=num/2; i++){
            if(num==2){
                printf("%d eh primo\n",num);
                break;
            }
            else if(num%i==0)
                j++;
        }
        if(j>0)
            printf("%d nao eh primo\n",num);
        else
            printf("%d eh primo\n",num);
        n--;
    }
    return 0;
}
