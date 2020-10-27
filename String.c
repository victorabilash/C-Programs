#include<stdio.h>
int main()
{
	/* char ch[20]={'A','B','C'}; //mutable
	char *str="ABCDE";  //Immutable
	prinf("%s",ch); */
	char str[100];
	scanf("%s",str);
	int len=0;
	while(str[len]!='\0')
	{
		len++;
	}
	printf("%d",len);

}