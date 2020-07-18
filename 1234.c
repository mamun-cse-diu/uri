#include<stdio.h>
#include<string.h>
int main()
{
    char arr[100];
    int i,j,lngth;
    while(gets(arr) != NULL){
        j=0;
        lngth=strlen(arr);
        for(i = 0;i < lngth;i++){
            if(arr[i]!=' '){
               j++;
               if(arr[i]>96 && j%2==1)
                  arr[i]-=32;
               else if(arr[i]<96 && j%2==0)
                  arr[i]+=32;
            }
        }
        arr[lngth]='\0';
        printf("%s\n",arr);
    }
    return 0;
}
