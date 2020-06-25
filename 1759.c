#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        if(i!=n-1)
            printf("Ho ");
        else
            printf("Ho!\n");
    }
    return 0;
}
