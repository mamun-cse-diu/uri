#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int small=a[0];
    int index=0;
    for(i=1;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
            index=i;
        }
    }
    printf("%d\n",index+1);
    return 0;
}
