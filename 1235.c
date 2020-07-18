#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[102],arr2[102];
    int j,len,m,n,k;
    scanf("%d",&n);
    getchar();
    while(n--){
        gets(arr1);
        len=strlen(arr1);
        m=len/2;
        k=0;
        for(j = m-1;j >= 0;j--){
            arr2[k]=arr1[j];
            k++;
            }
        k=m;
        for(j = len-1;j >= m;j--){
            arr2[k]=arr1[j];
            k++;
        }
        arr2[len]='\0';
        puts(arr2);
    }
    return 0;
}
