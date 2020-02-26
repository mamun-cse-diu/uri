#include<stdio.h>
int main()
{
    int x,y;
    float reslt;
    scanf("%d %d",&x,&y);
    if(x==1){
        reslt=4.00*y;
        printf("Total: R$ %.2f\n",reslt);
    }
    else if(x==2){
        reslt=4.50*y;
        printf("Total: R$ %.2f\n",reslt);
    }
    else if(x==3){
        reslt=5.00*y;
        printf("Total: R$ %.2f\n",reslt);
    }
    else if(x==4){
        reslt=2.00*y;
        printf("Total: R$ %.2f\n",reslt);
    }
    else if(x==5){
        reslt=1.50*y;
        printf("Total: R$ %.2f\n",reslt);
    }
    return 0;
}
