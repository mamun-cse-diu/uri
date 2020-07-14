#include<stdio.h>
int main()
{
  int t,n,j,i,count;
  scanf("%d",&t);

  while(t!=0){
    count = 0;
    scanf("%d",&n);
    long long int arr[n];

    for(i=0; i<n; i++){
      scanf("%lld",&arr[i]);
    }

    for(i=0; i<n; i++){
      for(j=i+1; j<n; j++){
        if(arr[i]==arr[j]){
          arr[j]=-1;
        }
      }
    }

    for(i=0; i<n; i++){
      if(arr[i]>=0)
        count++;
    }

    printf("%d\n",count);
    t--;
  }
  return 0;
}
