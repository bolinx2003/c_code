#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//
//void test()
//{
//	static int n = 1;
//	n++;
//	printf("%d ", n);
//	//printf("%p\n", &n);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//
//extern int Add(int, int);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}
//

//
//#define NUM 100
//#define STR "hehe"
//
//#define ADD(x, y) ((x)+(y))
//
//int main()
//{
//	//printf("%d\n", NUM);
//	//printf("%s\n", STR);
//
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//
//	//char ch = 'w';
//	//char* pc = &ch;
//
//	return 0;
//}
//

//
//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	*pc = 'b';
//	printf("%c\n", ch);
//
//	return 0;
//}

//
//int main()
//{
//	char ch = 'w';
//	int n = 100;
//	double d = 3.14;
//
//	char* pc = &ch;
//	int* pi = &n;
//	double* pd = &d;
//
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pi));
//	printf("%d\n", sizeof(pd));
//
//	return 0;
//}

//
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	double score;
//};
//
//int main()
//{
//	struct Stu s1 = {"张三", 20, "男", 90.5};
//	struct Stu s2 = {"如花", 40, "女", 99.5};
//	scanf("%s %d %s %lf", s1.name, &(s1.age), s1.sex, &(s1.score));
//	//printf("%s %d %s %lf\n", s1.name, s1.age, s1.sex, s1.score);
//	struct Stu* ps = &s1;
//	//printf("%s %d %s %lf\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).score);
//	printf("%s %d %s %lf\n", ps->name, ps->age, ps->sex, ps->score);
//
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	while (scanf("%d %d", &n, &m) == 2)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}



