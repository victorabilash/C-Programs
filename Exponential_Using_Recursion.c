#include<stdio.h>
int power(int m,int n)
{
  // using more optimized method
  if(n==1)
  {
    return m;
  }
  if((n&1)==0) // 1 unit
  {
    return power(m*m, n/2);

  }
  else
  {
    return power(m*m,n/2) *m;
  }
  if(n==0)
  {
    return 1;
  }
  else
  {
    return power(m,n-1)*m;
  }
}
//USING LOOOP
int power_Loop(int m,int n)
{
  if(n==0)
  {
    return 1; // anything power zero is equal to 1
  }
  else
  { int power=1
    for(int i=0;i<n;i++)
    {
      power*=m;
    }
    return power;
  }
}
int main()
{ int m=3,n=3;
  int ans = power(m,n);
  printf("%d ",ans );
  ans=power_Loop(m,n);
  printf("%d",ans);
}
