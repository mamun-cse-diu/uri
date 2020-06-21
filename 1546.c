#include<stdio.h>
int main() {

int n,i,j;
scanf("%d",&n);
for(i=0; i<n; i++)
{
    int t;
    scanf("%d",&t);
    for(j=0; j<t; j++)
    {
        int x;
        scanf("%d",&x);
        if(x==1)
            printf("Rolien\n");
        if(x==2)
            printf("Naej\n");
        if(x==3)
            printf("Elehcim\n");
        if(x==4)
            printf("Odranoel\n");
    }
}

    return 0;
}
