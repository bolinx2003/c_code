#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	//if (age >= 18)
//	//	printf("成年\n");
//
//	//if (age >= 18)
//	//	printf("成年\n");
//	//else
//	//	printf("未成年\n");
//
//	if (age < 18)
//	{
//		printf("青少年\n");
//		printf("好好学习\n");
//	}
//	else if (age >= 18 && age < 30)
//	{ 
//		printf("青年\n");
//	}
//	else if (age >= 30 && age < 50)
//	{
//		printf("中年\n");
//	}
//	else if (age >= 50 && age < 80)
//	{
//		printf("中老年\n");
//	}
//	else if (age >= 80 && age < 100)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老寿星\n");
//	}
//		
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 2;
//
//	if (a == 1)
//	{
//		if (b == 2)
//		{ 
//			printf("hehe\n");
//		}
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


//
//int test()
//{
//	int a = 5;
//
//	if (a)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int ret = test();
//	printf("ret = %d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	int num = 1;
//
//	if (5 == num)
//		printf("hehe\n");
//
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	//if (n % 2 != 0)
//	//if (1 == n % 2)
//	//if (n % 2)
//
//	if (n % 2 == 1)
//	{
//		printf("奇数\n");
//	}
//
//	return 0;
//}
//
//
//int main()
//{
//	int i = 1;
//
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//
//	//while (i <= 100)
//	//{
//	//	if (i % 2 == 1)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//	i++;
//	//}
//
//	return 0;
//}
//

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期天\n");
//		break;
//	}
//
//	//if (1 == day)
//	//	printf("星期一\n");
//	//else if (2 == day)
//	//	printf("星期二\n");
//	//else if (3 == day)
//	//	printf("星期三\n");
//	//else if (4 == day)
//	//	printf("星期四\n");
//	//else if (5 == day)
//	//	printf("星期五\n");
//	//else if (6 == day)
//	//	printf("星期六\n");
//	//else
//	//	printf("星期日\n");
//
//	return 0;
//}

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//
//	printf("m = %d, n = %d\n", m, n);
//
//	return 0;
//}

//
//int main()
//{
//	//while (1)
//	//	printf("hehe\n");
//
//	int i = 1;
//
//	while (i <= 10)
//	{
//		if (5 == i)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}


//
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//
//	return 0;
//}

//
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//
//	//getchar();
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("请确认密码(Y/N):>");
//	int ch = getchar();
//	if ('Y' == ch)
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//
//	//while (scanf("%d", &ch) != EOF)
//	//{
//	//	printf("%d ", ch);
//	//}
//
//	return 0;
//}
//

//
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;//初始化
//	while (i <= 10)//判断
//	{
//		printf("%d ", i);
//		i++;//调整
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (5 == i)
//			continue;
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	//for (; ;)
//	//{
//	//	printf("呵呵\n");
//	//}
//
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("%d: hehe\n", ++count);
//		}
//	}
//
//	return 0;
//}


