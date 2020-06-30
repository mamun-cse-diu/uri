#include<stdio.h>
int main()
{
    int i,j,n,m,sum=0,count;
    while(1){
        scanf("%d %d",&n,&m);
        if(n==0 && m==0)
            break;
        int a[m];
        for(i=0; i<m; i++){
            scanf("%d",&a[i]);
        }
        for(i=0; i<m; i++){
            count=0;
            for(j=i+1; j<m; j++){
                if(a[i]==a[j] && a[i]!=0){
                    count++;
                    a[j]=0;
                    a[i]=0;
                }
            }
            if(count>=1){
                count=1;
                sum+=count;
            }
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
