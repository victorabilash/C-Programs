#include<stdio.h>
void duplicate(char str[])
{
  int x=0,y=1,i,k; // 4 Byte= 32 Bit // 4 unit
  for(i=0;str[i]!='\0';i++) // initialization = 1 unit; condition= n+1 (n- successful, 1- for null character); increament = n+1
  {
    y=1; // n unit
    k=str[i]-97; // n unit
    y=y<<k; // n unit
    if((x&y)==y) // worst case n unit // masking = checking whether the K th bit is On or Off / 1 or 0
    {
      printf("%c is a duplicate element\n",str[i]); // n unit
    }
    else
    {
      x= x | y; // merging = switching Kth bit to one //
    }
  }
} /*
    total time taken
    4+1+n+1+n+1+n+n+n+n+n= 7n+7= O( n)
  */
int main()
{
  char  str[100]; // 1 unit
  scanf("%s",&str); // 1 unit
  duplicate(str); // 7n+7
}
// TOTAL TIME COM OF THE PROGRAM  // SPACE COMPLEXITY

// 7n+9 -> O(n)                   //4n^0= O(1)
