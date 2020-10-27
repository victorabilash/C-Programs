#include<stdio.h>
int main()
{
  int m,n,i;
  scanf("%d %d",&m,&n);
  if(n>=100)
  {
    for(i=m;i<=n;i++)
    {
      printf("%03d ",i);
    }
  }
  else if(n>=10)
  {
    for(i=m;i<=n;i++)
    {
    printf("%02d ",i);
  }
}
else
{
  for(i=m;i<=n;i++)
  {
    printf("%d ",i);
  }
}
}
