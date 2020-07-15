#include<stdio.h>
#include<string.h>
int main()
{
    char str[128];
    int i;
    while(gets(str)){
      for(i = 0; i<strlen(str); i++){
        if(str[i]==',')
          printf("\n");
        else
          printf("%c",str[i]);
      }
      printf("\n");
    }
    return 0;
}
