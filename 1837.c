#include<stdio.h>
int main(){
    int a,b,r=0,q=0,m;
    scanf("%d %d",&a,&b);
    while(1){
        q = (a-r)/b;
        m = (a-r)%b;
        if(m==0){
            printf("%d %d\n",q,r);
            break;
        }
        r++;
    }
    return 0;
}
