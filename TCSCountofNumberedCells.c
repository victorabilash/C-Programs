#include<stdio.h>
int main()
{
  int n,count=0;
  scanf("%d",&n);
  int arr[n][n];
  for(int i=0;i<n;i++)
  {
    for(int j=0; j<n;j++)
    {
      scanf("%d",&arr[i][j]);
      if(arr[i][j]<11) count++;
    }
  }
  printf("%d",count);
}
