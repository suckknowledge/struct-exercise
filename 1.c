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
}s1,s2;//s1 s2Ҳ�ǽṹ�����������Ϊȫ�ֱ���
int main()
{
	struct Stu s = { {'s',13,2.34}, "lisa",15,"154164841"};//sΪ�ֲ�����
	printf("%c\n", s.ob.c);
	printf("%s\n", s.id);//�������
	struct Stu* ps = &s;
	printf("%s\t%d\t%lf\n", (*ps).arr, (*ps).age, (*ps).ob.d);//��ӡ��ʽ1
	printf("%s\t%d\t%lf\n", ps->arr,ps->age,ps->ob.d);//��ӡ��ʽ2
		
	return 0;
}