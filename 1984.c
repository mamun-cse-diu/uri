#include <stdio.h>
#include <string.h>
int main()
{
    char arr[25],a;
    scanf("%s",arr);
    int len = strlen(arr);
    int i, j;
    for(i=0, j=len-1; i < len/2; i++, j--)
    {
        a = arr[i];
        arr[i]=arr[j];
        arr[j]=a;
    }
    printf("%s\n",arr);
    return 0;
}
