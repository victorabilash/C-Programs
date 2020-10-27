#include<stdio.h>
int fact(int n)
{
  if(n==0)
  {
    return 1;
  }
  else
  {
    return n*fact(n-1);
  }
}
double power(int m, int n)
{
  if(n==1)
  {
    return m;
  }
  if((n&1)==0)
  {
    return power(m*m,n/2);
  }
  else
  {
    return power(m*m,n/2)*m;
  }
}
double e(int x, int n) // T(n)
{
   if(n==0) // 1 Unit
   {
     return 1;
   }
   else
   {
     return e(x,n-1) + (double)power(x,n)/(double)fact(n); // T(n-1 + n+ log n)
   }
}
double optimized1(int x, int n) // T(n)= T(n-1) +  9
{ static int p=1,f=1; // 2 Unit
  double r; // 1 Unit
  if(n==0) // 1 Unit
  {
    return 1;
  }
  else
  {
    r = optimized1(x,n-1); // T(n-1)
    p=p*x; // 1 Unit
    f=f*n; // 1 Unit
  }
  return r + (double)p/f; // 3 Unit (+,*,/)
}
/*
 T(n) = T(n-1) + 1
 T(n-1) = T(n-2) + 1
 T(n)= T(n-2) +2
 T(n-2) = T(n-3) +1
 T(n) =T(n-3) + 3

  GENERALIZE
  T(n)= T(n-k) + k   T(0)=1 // n-k=0 // n=k
  T(n)=T(n-n)+n
      = T(0) +n
      = 1 + n
TIME COMPLEXITY FOR THE OPTIMIZED METHOD 1
      O(n)
      */
double optimized2(int x, int n) // T(n) = T(n-1) + 6
{ static double s=1; // 1 Unit
  if(n==0) // 1 Unit
  {
    return s;
  }
  else
  {
    s=1+(double)x/n*s; // 4 Unit
  }
  return optimized2(x,n-1); // T(n-1) Unit
}
/*
  T(n) = T(n-1) + 1
  T(n-1)= T(n-2) + 2
TIME COMPLEXITY
  O(n)
*/
int main()
{
  int x=2,n=4;
  double ans=e(x,n);
  double op=optimized1(x,n);
  double op2=optimized2(x,n);
  printf("%lf %lf %lf",ans,op,op2);
}

// T(n) = T(n-1) + n + logn //T(0)=1
/* T(n-1)= T(n-1-1) + n-1 + log(n-1)
T(n-1)= T(n-2)+ n-1 +log(n-1);
T(n) = T(n-2) + n-1 + log(n-1) + n + log n
T(n) = T(n-2) + 2n-1 + log(n-1) + log n
T(n-2)= T(n-3) +n-2 + log(n-2);
T(n) = T(n-3) + 3n-1 + log(n-2) + log(n-1) + log n

GENERALIZE
T(n)=T(n-k)+ kn-k + klogn   n-k=0 n=k
T(n) = T(n-n) + n^2-n + nlogn
T(n)= T(0) + n^2-n + nlogn => O(n^2)

// log(8) + log(7) +log(6) = 3(8) + 3(7)
*/
