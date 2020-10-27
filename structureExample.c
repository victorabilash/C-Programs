#include<stdio.h>
struct student
{
	char *name;
	int age;
	int rolln;
};
int main()
{
	struct student stu;
	stu.name="vic";
	stu.age=19;
	stu.rolln=34;
	printf("%s\n",stu.name);
	printf("%d\n",stu.age);
	printf("%d\n",stu.rolln);
}