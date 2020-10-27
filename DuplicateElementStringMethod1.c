#include<stdio.h>
int length(char str[]) // to find the length of the string
{
	int len=0; // 1 unit
	while(str[len]!='\0') // n+1 (1 is for the \0 ) times unit // '\0' to go till the last character
	{
		len++; // n unit
	}
	return len; // 1 unit
} // 2n+3
void duplicate(char str[],int n) 
{
	int i,j,flag; // 3 unit
	/*  
	   i -> is the selected character
	   j -> is the element comparison character

	*/
	// SELECTING THE CHARACTER 
	// TIME COMPLEXITY
	// 1+n-1+n-1+n-2+n-2+n-2+n-2= 6n-9
	for(i=0;i<=n-2;i++) // initialization= 1 unit; condition= N-1; increment= N-1// (n-2) bc we need not check for the last element, since there is no element after that to compare
	{   
		flag=0; // N-2 Unit
		//TIME COMPLEXITY OF THE INNER LOOP
		// 1+n+n+n-1+n-1+n-1 = 5n-2
		if(str[i]!=1)  // worst case = n-2 unit
		{   // COMPARISON OF THE CHARACTERS
			for(j=i+1;j<=n-1;j++) // initialization= 1 unit; conditon= n unit; increment= n unit // j=i+1 because we should start comparing from the next element after 'i' 
			{
				if(str[i]==str[j]) //n-1 unit
				{
					flag=1;  // n-1 unit
					str[j]=1;  // n-1 unit
				}
			}
			if(flag==1) // worst case= n-2 unit
			{
				printf("%c is a duplicate character\n",str[i]); // n-2 unit
			}
		}
	} 
} // Total Time Complexity= (6n-9) * (5n-2)= (30n^2 - 12n) - (45n + 18)
   // = 30n^2-57n+18+3
  
int main()
{
	char str[100]; //1 unit
	scanf("%[^\n]s",&str); //1 unit
    int n=length(str); //2n+3
    duplicate(str,n); //30n^2-57n+21
}

// TOTAL TIME COMPLEXITY OF THE PROGRAM     // SPACE COMPLEXITY = 5n^0 = O(n^0) = O(1)
// 1+1+2n+3+30n^2-57n+21
// highest degree= 2
// O(n^2)