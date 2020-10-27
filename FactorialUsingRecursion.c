#include<stdio.h>
int fact(int N)
{
  if(N==0)
  {
    return 1;
  }
  else
  {
    return N*fact(N-1);
  }
}
int main()
{
  int N=5;
  int ans = fact(N);
  printf("%d",ans);
}
