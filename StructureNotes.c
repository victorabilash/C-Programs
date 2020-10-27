#include<stdio.h>

struct Rectangle //name of the structure, it is user-defined
{
	int length;
	int breadth;
};
struct cards
{
  int face;
  int shape;
  int color;
};

struct example
{
	int a;
};

int main()
{
   

   //declaring a variable with the user defined keyword, "struct Rectangle"
	//now the memory will be allocated int the memory
	// struct Rectangle r={10,5}; //declaring the value in the single line
	struct Rectangle r;
	//declaring the variable individually
	r.length=10;
	r.breadth=10;
	struct Rectangle temp;
	temp.length=3;
	temp.breadth=4;
	printf("%d %d ",r.breadth,r.length);


    //structure as an array
    struct cards c[52]={{0,1,2},{2,2,2},{1,2,3}};
    printf("%d",c[2].face,c[2].shape,c[2].color);
    
    struct example exp.a=2;
    printf("%d",exp.a);


}
