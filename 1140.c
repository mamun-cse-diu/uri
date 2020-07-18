#include <stdio.h>
#include <string.h>
int main()
{
    char str[1500];
    while(1)
    {
        fgets(str,1500,stdin);
        if(str[0]=='*')
            break;
        else
        {
            int len, i,j,mm=1;
            char cse[2];
            len=strlen(str);
            if(str[0]>=65 && str[0]<=90)
                cse[0]=str[0]+32;
            else if(str[0]>=97 && str[0]<=122)
                cse[0]=str[0]-32;
            for(i=1; i<len; i++)
            {
                if(str[i]==' ')
                {
                    if(str[i+1]==str[0] || str[i+1]==cse[0])
                        continue;
                    else{
                        mm=0;
                        break;
                    }
                }
            }
            if(mm==1) printf("Y\n");
            else printf("N\n");
        }
    }
    return 0;
}
