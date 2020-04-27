#include<stdio.h>
int main()
{
    int ary[100],i,j,a;
    for(i=1; i<=100; i++){
        scanf("%d",&ary[i]);
    }
    for(i=1; i<=100; i++){
        a=0;
        for(j=1; j<=100; j++){
            if(ary[i]>ary[j]){
                a=a+1;
            }
        }
        if(a==99){
            printf("%d\n",ary[i]);
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
