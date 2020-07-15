#include<stdio.h>
int main()
{
    int i,n;
    char str[35]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}
