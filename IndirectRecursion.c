// TAIL INDIRECT RECURSION
/*
   IR will take place when there are no lines to
   execute after the function is called.
*/
#include<stdio.h>
void funA(int n) // T(n) //T(n) = A(n-1)+2
{
  if(n>0) // 1 Unit
  {
    printf("%d",n); // 1 Unit
    funB(n-1); // Functions are tailed recursion // A(n-1)
  }
}
void funB(int n) // A(n) = T(n/2) + 2
{
  if(n>1) // 1 Unit
  {
    printf("%d",n); //1 Unit
    funA(n/2);  // T(n/2)
  }
}
int main()
{
  int n=20;
  funA(n);

}
// TIME COMPLEXITY
// T(n) = T(n/2) + 1
// T(n/2) = T(n/4) + 1
// T(n)= T(n/4)+2
// T(n/4) = T(n/2^3) + 2
// T(n)= T(n/2^3) +
// GENERALIZED EQUATION
// T(n) = T(n/2^k) + (k)
// O( log2 (n))

/*
// HEAD INDIRECT recursion
#include<stdio.h>
int funA(int n) // T(n)= (A(n-1)=T(n/2)+2)+ 2
{
  if(n>0) // 1 Unit
{
funB(n-1); // A(n-1)=> A(n)
printf("%d",n); // 1 Unit
}
}
int funB(int n) // A(n)= T(n/2)+2
{
if(n>0) // 1 Unit
{
funA(n/2); // T(n/2)
printf("%d",n); // 1 Unit
}
}
int main()
{
int n=20; // 1 Unit
funA(n); //
}

// T(n)= T(n/2) + 1

//T(n/2)=T(n/2^2) + 1

// T(n)= T(n/2^2) + 2

// T(n/2^2)= T(n/2^2^2) + 1

// T(n)= T(n/2^3) + 3

// GENERALIZE

// T(n)=T(n/2^k)+k  // n/2^k=1
                    // n=2^k => k=log2(n)
// T(n)=T(n/n) + log2(n)
   // T(n)= T(1) +log2(n)
      // T(n)= 1 + log2(n)

      // TIME COMPLEXITY
        // O(log2(n))


*/
