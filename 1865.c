#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,b;
    char str[200];
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%s %d",str,&b);
        if(strcmp(str, "Thor"))
          printf("N\n");
        else
          printf("Y\n");
    }
    return 0;
}
