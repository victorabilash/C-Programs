#include<stdio.h>
#include<stdlib.h>
struct rectangle
{
  int len;
  int brd;
};
int main()
{
   struct rectangle *r=(struct rectangle*) malloc(sizeof(struct rectangle));
   (*r).len=12;
   (*r).brd=12; //we are accessing the data in the heap memory after derefencing
   /*  Direct way of accesing the heap memory is using ' -> '
   r->len=10;
   r->brd=10; 
   */
   printf("%d %d",(*r).len,(*r).brd);
}