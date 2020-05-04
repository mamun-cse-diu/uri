#include<stdio.h>
int main()
{
    int n,i=1,j;
    scanf("%d",&n);
    while(n!=0){
        for(j=1; j<=3; j++){
            printf("%d ",i);
            i++;
        }
        printf("PUM\n");
        i++;
        n--;
    }
    return 0;
}
