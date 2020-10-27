#include<stdio.h>
void array_multiplication(int arr1[],int arr2[],int n)
{
  int temp[n];
  for(int i=0;i<n;i++)
  {
    temp[i]=arr1[i]*arr2[i];
  }
  for(int i=0;i<n;i++)
  {
    printf("%d ",temp[i]);
  }
}
int main()
{
  int n;
  scanf("%d",&n);
  int arr1[n],arr2[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr1[i]);
  }
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr2[i]);
  }
  array_multiplication(arr1,arr2,n);
}
