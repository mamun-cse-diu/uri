#include<stdio.h>
int main()
{
    char arr[1001];
    int n,m;
    while(scanf("%s",arr) != EOF){
        scanf("%d",&n);
        while(n--){
                scanf("%d",&m);
            printf("%c",arr[m-1]);
        }
        printf("\n");
    }
    return 0;
}
