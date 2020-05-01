#include<stdio.h>
int main()
{
    int n1,n2;
    while(1){
        scanf("%d %d",&n1,&n2);
        if(n1>0 && n2>0)
            printf("primeiro\n");
        else if(n1>0 && n2<0)
            printf("quarto\n");
        else if(n1<0 && n2<0)
            printf("terceiro\n");
        else if(n1<0 && n2>0)
            printf("segundo\n");
        else if(n1==0 || n2==0)
            break;
    }
    return 0;
}
