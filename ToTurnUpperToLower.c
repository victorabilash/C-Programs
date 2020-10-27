#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
  char str[100];
  int ctr,ch,i;
  fgets(str,sizeof(str), stdin);
  i=strlen(str);
  ctr=i;
  for(i=0;i<ctr;i++)
  {
    ch=islower(str[i])?toupper(str[i]):tolower(str[i]);
    putchar(ch);
  }
  return 0;

}
