#include<stdio.h>
void duplicate(char str[]) 
{
	int hash[26]={0};// 26 unit // hash[26]=0 bc we are initializing all the elements in the array to 0
	int i; // 1 unit
	while(str[i]!='\0') //n+1 unit // \0 -> U til it reaches a NULL character
	{
		hash[str[i]-97]++; //2 * n unit   // hash[str[i]-97] = hash[102(f->value)-97]= hash[5]++
		i++;   // n unit             // i++ since we have to compare from the next element
	}
	for(i=0;i<26;i++) // initialization= 1 unit; condition= 27 units; 27 units  // we are running a loop here to check if the array in Hash has an index with value greater than 1
		               // if it did, then the corresponding element is a duplicate element
	{
		if(hash[i]>1) // 26 unit
		{
			printf("%c is a duplicate character\n",i+97); // max. 26  // i+97 because we have to bring the corresponding element back
		}
	}
} /*
    TOTAL TIME TAKEN
    26+1+n+1+2n+1+27+27+26+26 = O( 4n + 135) 
   */
int main()
{
	char str[100]; // 1 unit
	scanf("%[^\n]s",&str); // 1 unit
	duplicate(str); // 4n+ 135 unit

}

// Total Time taken by the program
// 1+1+4n+135
// O(n^1)=O(n)