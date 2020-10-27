 #include<stdio.h>
int power(int base, int num)
{
  if(num !=0)
  {
    return (base*power(base,num-1));
  }
  else
  return 1;
}
int main()
{
  int base, number;
  scanf("%d",&base);
  scanf("%d",&number);
  int n=power(base,number);

  printf("%d ^ %d = %d",number,base,n);
} 
// Using WHILE LOOP
/* #include<stdio.h>
int power(int base, int exp)
{ int res=1;
  while(exp!=0)
  {
    res*=base;
    exp--;
  }
  return res;
}
int main()
{
  int base,exp,res=1;
  scanf("%d",&base);
  scanf("%d",&exp);
  int n=power(base,exp);
  printf("%d ^ %d = %d",base,exp,n);
}
*/

/* #include<stdio.h>
#include<math.h>
int main()
{
  int base,exp,res;
  scanf("%d %d",&base,&exp);
  res=pow(base,exp);
  printf("%d\n",res);
}
*/
