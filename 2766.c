#include<stdio.h>
#include<string.h>
int main() {
	char str[1000];
	for(int i=1;i<=10;i++)
	{
		scanf("%s",str);
		if(i==3||i==7||i==9)
            printf("%s\n",str);
	}
	return 0;
}
