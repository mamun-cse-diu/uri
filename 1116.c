#include<stdio.h>
int main()
{
    int n;
    float div,n1,n2;
    scanf("%d",&n);
    while(n!=0){
        scanf("%f %f",&n1,&n2);
        if(n2==0)
            printf("divisao impossivel\n");
        else{
            div = n1/n2;
            printf("%.1f\n",div);
        }
        n--;
    }
    return 0;
}
