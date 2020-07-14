#include<stdio.h>
int main()
{
  int n,r,i,j,k,m,a,b;
  while(scanf("%d %d",&n,&r)!=EOF){
    int arr[r];

    for(i = 0; i<r; i++){
      scanf("%d",&arr[i]);
    }

    for(i=0; i<r; i++){
      for(j=i+1; j<r; j++){
        if(arr[i]>arr[j]){
          a = arr[i];
          arr[i] = arr[j];
          arr[j] = a;
        }
      }
    }

   k = 0,b=1;

    for(j = 1; j<=n; j++){
      m=0;
      for(i = 0; i<r; i++){
        if(j!=arr[i]){
          m++;
        }
      }
      if(m==r){
        printf("%d ",b);
        k++;
      }
      b++;
    }
    if(k==0)
      printf("*\n");
    else
      printf("\n");
  }
  return 0;
}
