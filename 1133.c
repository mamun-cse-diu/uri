#include<stdio.h>
int main()
{
    int n1,n2,a,b,i;
    scanf("%d %d",&n1,&n2);
    if(n1<n2){
        a=n1;
        b=n2;
    }
    else{
        a=n2;
        b=n1;
    }
    for(i=a+1; i<b; i++){
        if(i%5==2 || i%5==3)
            printf("%d\n",i);
    }
    return 0;
}
