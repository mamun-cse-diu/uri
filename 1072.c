#include<stdio.h>
int main()
{
    int n,num,i=0,j=0;
    scanf("%d",&n);
    while(n!=0){
        scanf("%d",&num);
        if(num>=10 && num<=20){
            i++;
        }
        else{
            j++;
        }
        n--;
    }
    printf("%d in\n",i);
    printf("%d out\n",j);
    return 0;
}
