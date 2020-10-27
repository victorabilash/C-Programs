#include<stdio.h>
int fib(int n) // T(n) = T(n-1) + T(n-2)
{
  if(n<=1) // 1 Unit
  {
    return n;
  }
  else{
    return fib(n-1)+fib(n-2);  // T(n-1) + T(n-2)
  }
}
int OptimizedFib(int n, int arr[])
{
  if(n<=1)
  {
    arr[n]=n;
    return arr[n];
  }
  else
  {
    if(arr[n]== -1)
    {
      arr[n]=OptimizedFib(n-1,arr)+OptimizedFib(n-2,arr);
      return arr[n];
    }
    else
    {
      return arr[n];
    }
  }

}
// T(n) = 1/sqrt(5) [((1+sqrt(5))/2)^n - ((1-sqrt(5))/2)^n]
int OptimizedFib2(int n) // T(o)= O(logn)
{
  double term1 = (1 + sqrt(5))/2.0; // 4 Unit
  term1=pow(term1,n); // O(logn)
  double term2 = (1 - sqrt(5))/2.0; // 4 Unit
  term2=pow(term2,n); // logn
  double ans = term1 - term2; // 2 unit
  double mul = 1.0/sqrt(5); // 3 unit
  return (int)(mul*ans); // 2 unit
}
int main()
{
  int n=6;
  int arr[n+1];
  for(int i=0;i<n;i++)
  {
    arr[i]=-1;
  }
  int ans=fib(n);
  int opans=OptimizedFib(n,arr);
  printf("%d %d",ans,opans);
}
/*
  TIME COMPLEXITY
  T(n) = T(n-1) + T(n-2) + 1  // T(0)=0 // T(1)=0
  Characteristic Equation
  T(n) - T(n-1) - T(n-1) = 0
  x^2 - x - 1 = 0
finding roots
   -b +- sqrt(b^2-4ac)/2a
   a=1 b=-1 c=-1

  -(-1) +- sqrt((-1^2)- 4(1)(-1))/2(1)
  1 +- sqrt(1 + 4)/2
  1 +- sqrt(5)/2
  root I:  1 + sqrt(5)/2
  root II: 1 - sqrt(5)/2

 // T(n) = a * ((1+sqrt(5))/2)^n + b * ((1-sqrt(5))/2)^n
 find value of a & b
 // T(0) = a * 1 + b * 1
// T(0) = a * b
// a + b = 0 ---> 1  // a= -b // b= -a

// T(1) = a *  ((1+sqrt(5))/2) + b * ((1-sqrt(5))/2)
// 1 = a *  ((1+sqrt(5))/2) + b * ((1-sqrt(5))/2) --->2

In (2), we will be substituting (1)

// 1 =  a *  ((1+sqrt(5))/2) - a * ((1-sqrt(5))/2)

// 1 = a/2 + a(sqrt(5))/2 - a/2 *  a(sqrt(5))/2
// 1 =  a(sqrt(5))/2 + a(sqrt(5))/2
// 1 = 2 (a(sqrt(5))/2)
// 1 = a(sqrt(5))

// a = 1/ sqrt(5)  // b= -1/sqrt(5)

// T(n) = 1/ sqrt(5) * ((1+sqrt(5))/2)^n - 1/sqrt(5) * ((1-sqrt(5))/2)^n
// T(n) = 1/sqrt(5) [((1+sqrt(5))/2)^n - ((1-sqrt(5))/2)^n]

// O(((1+sqrt(5))/2)^n)
// O((1.681)^n)
// O(2^n)

*/
