/*
1.Pointer is an address variable used for storing the address of a data variable
for indirect accessment of the data.

2. A program can access code and stack section directly, but the program cannot access the heap memory directly,
bceause it is external, in that case we need a pointers to access the heap memory.

Uses of pointer
1. Accessing the heap memory
2. Acessing external resources
3. Parameter passing
*/
#include<stdio.h>
int main()
{
	int n=10; //Data Variable
	int *p; //Address Variable or Pointer [DECLARATION]
	p=&n; //Initialization of the pointer variable... &->adddress of variable n and 
	      //that address will be stored in P
	/* Declaration and Initialization in the same line 
	 int *p=&n;
	 */
	/*  DEREFERENCING
	   *p -> It will return the value stored in the data variable
	*/
	printf("%d %x",&n,p);
}