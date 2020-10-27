#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n;
  scanf("%d",&n);
  char c= 'R';
  int x=0,y=0;
  while(n)
  {
    switch(c){
      case 'R':
      x=abs(x)+10;
      y=abs(y);
      c='U';
      break;

      case 'U':
      y=y+20;
      c='L';
      break;

      case 'D':
      y=-(y);
      c='R';
      break;
    }
    n--;
  }
  printf("%d%d",x,y);
}
