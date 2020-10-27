/*
  DYNAMIC MEMORY ALLOCATION
   Using:-
   1. Malloc
   2. Calloc
   3. Free  //deallocation
   4. Realloc //deallocation
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *A=(int *)malloc(sizeof(int)*5);
	A[0]=1;
	A[1]=2;
	A[2]=3;
	A[3]=4;
	A[4]=5;
	/*for(int i=0;i<A[i]!='\0';i++)
	{
		printf("%d %d %d %d %d",A[i]);
	}*/
	printf("%d %d %d %d %d",A[0],A[1],A[2],A[3],A[4]);
}