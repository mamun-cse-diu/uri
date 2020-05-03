#include<stdio.h>
int main()
{
    int n1,n2,n,inter=0,grem=0,gren=0,emp=0;
    while(1){
        scanf("%d %d",&n1,&n2);
        printf("Novo grenal (1-sim 2-nao)\n");
        if(n1>n2){
            inter++;
            gren++;
        }
        else if(n1==n2)
            emp++;
        else{
            grem++;
            gren++;
        }
        scanf("%d",&n);
        if(n==1)
            continue;
        else if(n==2)
            break;
    }
    printf("%d grenais\n",gren);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",grem);
    printf("Empates:%d\n",emp);
    if(inter>grem)
        printf("Inter venceu mais\n");
    else if(grem>inter)
        printf("Gremio venceu mais\n");
    else
        printf("Não houve vencedor\n");
    return 0;
}
