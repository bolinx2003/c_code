#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	//if (age >= 18)
//	//	printf("����\n");
//
//	//if (age >= 18)
//	//	printf("����\n");
//	//else
//	//	printf("δ����\n");
//
//	if (age < 18)
//	{
//		printf("������\n");
//		printf("�ú�ѧϰ\n");
//	}
//	else if (age >= 18 && age < 30)
//	{ 
//		printf("����\n");
//	}
//	else if (age >= 30 && age < 50)
//	{
//		printf("����\n");
//	}
//	else if (age >= 50 && age < 80)
//	{
//		printf("������\n");
//	}
//	else if (age >= 80 && age < 100)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("������\n");
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
//		printf("����\n");
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
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//
//	//if (1 == day)
//	//	printf("����һ\n");
//	//else if (2 == day)
//	//	printf("���ڶ�\n");
//	//else if (3 == day)
//	//	printf("������\n");
//	//else if (4 == day)
//	//	printf("������\n");
//	//else if (5 == day)
//	//	printf("������\n");
//	//else if (6 == day)
//	//	printf("������\n");
//	//else
//	//	printf("������\n");
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
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
//	printf("����������:>");
//	scanf("%s", password);
//
//	//getchar();
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ������(Y/N):>");
//	int ch = getchar();
//	if ('Y' == ch)
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
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
//	int i = 1;//��ʼ��
//	while (i <= 10)//�ж�
//	{
//		printf("%d ", i);
//		i++;//����
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
//	//	printf("�Ǻ�\n");
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


