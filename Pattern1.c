#include<stdio.h>
int main()
{
  char a[20];
  int i,count[1000]={0};
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    count[a[i]]++;
  }
  for(i=0;a[i]!='\0';i++)
  {
    if(count[a[i]]!=-1)
    {
      printf("%c %d",a[i],count[a[i]]);
      count[a[i]]=-1;
    }
  }
  return 0;
}
