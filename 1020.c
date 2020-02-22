#include<stdio.h>
int main()
{
    int i,j,k;
    scanf("%d",&i);
    j=i/365;
    printf("%d ano(s)\n",j);
    k=i-(j*365);
    j=k/30;
    printf("%d mes(es)\n",j);
    j=k%30;
    printf("%d dia(s)\n",j);
    return 0;
}
