#include<stdio.h>
struct B
{
	char c;
	short s;
	double d;
};

struct Stu
{
	struct B ob;
	char arr[20];
	int age;
	char id[20];
}s1,s2;//s1 s2也是结构体变量，两者为全局变量
int main()
{
	struct Stu s = { {'s',13,2.34}, "lisa",15,"154164841"};//s为局部变量
	printf("%c\n", s.ob.c);
	printf("%s\n", s.id);//点操作符
	struct Stu* ps = &s;
	printf("%s\t%d\t%lf\n", (*ps).arr, (*ps).age, (*ps).ob.d);//打印方式1
	printf("%s\t%d\t%lf\n", ps->arr,ps->age,ps->ob.d);//打印方式2
		
	return 0;
}