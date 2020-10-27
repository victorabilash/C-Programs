#include<stdio.h>
#include<stdlib.h>
struct Array{
	int *A;
	int n;
	int length;
};
//function to append
void append(struct Array *arr,/*inserting ele*/int element) //f(n)=2 //f(n)=2 x n^0
{
  arr->A[arr->length/*Index where we need to place the ele*/]=element; // 1 unit of time
  arr->length++;	// 1 unit of time
} //Total time  Complexity= o(n^0) = o(1) 

void display(struct Array arr)
{
	for(int i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}
void insert(struct Array *arr,int index,int element)
{
	int i; // 1 unit of time
	for(i=arr->length-1;i>=index;i--) // initialisation= 1 unit; Condition= n+1 unit; Increment= n+1
	{
		arr->A[i+1]=arr->A[i]; // n unit
	}
	arr->A[index]=element; // 1 unit
	arr->length++; // 1 unit
} /* Total time complexity= 1+1+n+1+n+1+n+1+1=> f(n)= (3n+6)
   => O(n) 
   */
void delete(struct Array *arr, int index)
{
	int i;
	for(i=index+1;i<=arr->length;i++)
	{
		arr->A[i-1]=arr->A[i];
	}
	arr->length--;
}
//Replace Operation
void set(struct Array *arr,int index,int element)
{    
	if(index<arr->length)
	{
		arr->A[index]=element;
	}
}
int get(struct Array arr,int index)
{
  if(index<arr.length)
  {
     return arr.A[index]; //rerturning index position value in the array A
  }
  else
  {
  	return -1;
  }
}
//Search
int LinearSearch(struct Array arr, int key)
{
	int i,flag=-1; // 2 Unit
	for(i=0;i<arr.length;i++) // initialization= 1 unit; Condition= n+1 unit; Increment= n+1 unit 
	{
		if(arr.A[i]==key) // n unit
			{   
				flag=i; // 1 unit
				break;  // 1 unit
			}
	}
	if(flag==-1) //1 unit
		printf("%d is not found\n"); //1 unit
	else 
		printf("Element is found at %d\n",flag);
} /* 2+1+n+1+n+1+n+1+1+1+1 => f(n)=3n+7
     O(n)
  */

void BinarySearch(struct Array arr, int key)
{
	int start=0,end=arr.length-1,mid,flag=-1;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(arr.A[mid]==key)
		{
			flag=mid;
		}
		else if(key<arr.A[mid])
		{
			end=mid-1;
		}
		else if(key>arr.A[mid])
		{
			start=mid+1;
		}
	}
	if(flag==-1)
		printf("Element is not found\n");
	else
		printf("%d is found in %d",key,flag);
} /* 
    Total Time Cmplexity= O(log(n))
   */
int main()
{
	int size;
	scanf("%d",&size);
	struct Array arr;
	arr.n=size;
	arr.length=0;
	arr.A=(int *)malloc(sizeof(int)*arr.n);
	append(&arr,10);
	append(&arr,12);
	append(&arr,13);
	append(&arr,14);
	append(&arr,15);

	insert(&arr,1,78);
	delete(&arr,2);
	set(&arr,2,78);
	int x=get(arr,3);
	if(x<0)
	{
		printf("Invalid Index");
	}
	else
	{
		printf("%d is the element\n",x);
	}
 
    /* 
    int y=LinearSearch(arr,40);
    if(y==-1)
    	printf("Element is not found");
    else
    	printf("Elemet is found at %d",x); */
	BinarySearch(arr,12);

	display(arr);
}