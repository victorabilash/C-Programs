#include<stdio.h>
int sum(int N) // T(n) = T(n-1) + n +1
{
  if(N==0)  // 1 Unit
  {
    return 0;
  }
  else
  {
     return sum(N-1)+ N;  // T(n-1) + 1
  }
}
// USING LOOP

int sum_loop(int N) // 2+1+N+1+N+1+N+1 = 3N+6 = O(N) // TIME complexity // O(2*N^0) = O(N^0) = O(1) // SPACE complexity
{
  int i,sum=0; // 2 Unit
  for(i=0;i<=N;i++)  // initialization =1; condition= (n+1); increament= (n+1)
  {
    sum+=i; // N Unit
  }
  return sum; // 1 Unit
}

// USING FORMULA
int sum_formula(int N) // 3n^0 => O(1) TC // O(1) SC -> since no variable was used
{
  return (N*(N+1))/2;
}

int main()
{
  int N=5;
  int ans = sum(5);
  printf("%d ",ans);
  ans = sum_loop(5);
  printf("%d ",ans);
  ans = sum_formula(5);
  printf("%d",ans);
}
// for recursion
// T(n) = T(n-1) + 2
// T(0)=2
// T(n-1)= T(n-2) + 2

// T(n)=T(n-2) + 4 => T(n-2) + 4
// T(n-2)= T(n-3) + 2
// T(n) = T(n-3) + 2 + 4 =>T(n)= T(n-3) + 6

// GENERALIZE
// T(n)= T(n-k) + 2k [ n-k=0 // n=k]
// T(n)= 2 + 2n
// O(n) // time complexity
// O(n) // space complexity
