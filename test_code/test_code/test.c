#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//int main()
//{
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//    return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//    int x = 0;
//    scanf("%d", &x);
//    int y = 0;
//    if (x < 0)
//        y = 1;
//    else if (x == 0)
//        y = 0;
//    else
//        y = -1;
//    printf("%d\n", y);
//
//    return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//    int m = 0;
//    scanf("%d", &m);
//
//    if (m % 5 == 0)
//        printf("YES\n");
//    else
//        printf("NO\n");
//
//    return 0;
//}
//

//
//дһ�����������������Ľϴ�ֵ
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int ret = get_max(a, b);
//	printf("%d\n", ret);
//	return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//    int iq = 0;
//    while (~scanf("%d", &iq))
//    {
//        if (iq >= 140)
//            printf("Genius\n");
//    }
//    return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//    printf("Name    Age    Gender\n");
//    int i = 0;
//    for (i = 0; i < 21; i++)
//    {
//        printf("-");
//    }
//    printf("\nJack    18     man\n");
//    return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d %d\n", a / b, a % b);
//    return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//    int a = 40;
//    int c = 212;
//    printf("%d\n", (-8 + 22) * a - 10 + c / 2);
//
//    return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    while (~scanf("%d %d", &a, &b))
//    {
//        if (a == b)
//            printf("%d=%d\n", a, b);
//        else if (a > b)
//            printf("%d>%d\n", a, b);
//        else
//            printf("%d<%d\n", a, b);
//    }
//    return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//    float score = 0.0;
//    float sum = 0.0;
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%f", &score);
//        sum += score;
//    }
//    printf("%.2f %.2f\n", sum, sum / 3);
//
//    return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        printf("%d", n % 10);
//        n /= 10;
//    }
//    return 0;
//}
//

//
//#include <stdio.h>
//
//int max3(int x, int y, int z)
//{
//    int max = x > y ? x : y;
//    max = max > z ? max : z;
//    return max;
//}
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    float m = (float)(max3(a + b, b, c)) / ((max3(a, b + c, c)) + (max3(a, b, b + c)));
//    printf("%.2f", m);
//
//    return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//    float score[5] = { 0.0 };
//    int i = 0;
//    for (i = 0; i < 5; i++)
//    {
//        //����һ��ѧ���ĳɼ�
//        float sum = 0.0;
//        int j = 0;
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%f", &score[j]);
//            sum += score[j];
//        }
//        for (j = 0; j < 5; j++)
//        {
//            printf("%.1f ", score[j]);
//        }
//        printf("%.1f\n", sum);
//    }
//    return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    float high = 0.0;
//    float sum = 0.0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%f", &high);
//        sum += high;
//    }
//    printf("%.2f\n", sum / 5);
//
//    return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
//

//
//д���뽫�������������Ӵ�С���
//void Swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//		Swap(&a, &b);
//	if (a < c)
//		Swap(&a, &c);
//	if (b < c)
//		Swap(&b, &c);
//
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}
//

//
//дһ�������ӡ1-100֮������3�ı���������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 3; i < 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//

//
//���������������������������Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//�����Լ��
//	//����1:
//	//������С����
//	/*int m = a > b ? b : a;
//	while (a%m!=0 || b%m!=0)
//	{
//		m--;
//	}
//	printf("%d\n", m);*/
//
//	//����2
//	//շת�����
//	int m = 0;
//	while (m = a % b)
//	{
//		a = b;
//		b = m;
//	}
//	printf("%d\n", b);
//
//	return 0;
//}
//

//
//��ӡ1000�굽2000��֮�������
//int main()
//{
//	int y = 1000;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//			printf("%d ", y);
//	}
//	return 0;
//}
//

//
//дһ�����룺��ӡ100~200֮�������
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//2~i-1
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 101; i < 200; i+=2)
//	{
//		//2~sqrt(i)
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;//��������
//	for (i = 101; i < 200; i += 2)
//	{
//		int flag = 1;//����������
//		//2~sqrt(i)
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}
//

//
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}
//

//
//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	float sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += (flag * (1.0 / i));
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//
//	return 0;
//}
//

//
//��10 �����������ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�����ֵ
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//
//	return 0;
//}
//

//
//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;//��
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;//��
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//

//
//��������Ϸ
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("*****************\n");
//	printf("*** 1.play    ***\n");
//	printf("*** 0.exit    ***\n");
//	printf("*****************\n");
//}
//
//void game()
//{
//	//���������
//	int ret = rand() % 100 + 1;//1~100
//	//������
//	while (1)
//	{
//		int guess = 0;
//		printf("������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	//���������������
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//

//
//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;//Ҫ���ҵ���
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//���ֲ���
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//
//	return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//    int ch = 0;
//    while (~(ch = getchar()))
//    {
//        if (ch >= 'A' && ch <= 'Z')
//            putchar(ch + 32);
//        putchar('\n');
//        getchar();//����\n
//    }
//    return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//    char ch[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//    int sz = sizeof(ch) / sizeof(ch[0]);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%c", ch[i]);
//    }
//    return 0;
//}
//

//
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int time = n / 12 * 4 + 2;
//    printf("%d\n", time);
//
//    return 0;
//}
//


//
//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
//#include <math.h>
//
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 100;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//

//
//ʵ�ֺ����ж�year�ǲ������ꡣ
//int is_leap_year(int y)
//{
//	return ((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0);
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//			printf("%d ", y);
//	}
//	return 0;
//}
//

//
//ʵ��һ�������������������������ݡ�
//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	//����
//	Swap(&a, &b);
//	printf("������:a=%d b=%d\n", a, b);
//	return 0;
//}
//

//
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//
//	return 0;
//}
//

//
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void Print(int n)
//{
//	if (n > 9)
//		Print(n / 10);
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//
//	return 0;
//}
//


//
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//�ǵݹ�
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//�ݹ�
//int Fac2(int n)
//{
//	if (1 == n)
//		return 1;
//	else
//		return Fac2(n - 1) * n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac2(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//#include <string.h>
//
//�ǵݹ�
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
// 
//�ݹ�
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//
//����С������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	//����С������
//	//����1��
//	//�����Ǵ����
//	/*int m = a > b ? a : b;
//	while (m%a!=0 || m%b!=0)
//	{
//		m++;
//	}
//	printf("%d\n", m);*/
//
//	//����2��
//	/*int i = 1;
//	while (a*i%b != 0)
//	{
//		i++;
//	}
//	printf("%d\n", a * i);*/
//
//	//����3��
//	int m = 0;
//	int a1 = a;
//	int b1 = b;
//	while (m = a%b)
//	{
//		a = b;
//		b = m;
//	}
//	//��ʱbΪ���Լ��
//	printf("%d\n", a1 * b1 / b);
//
//	return 0;
//}
//

//
//#include <stdio.h>
//#include <string.h>
//
//void reverse_string(char* left, char* right)
//{
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char arr[100] = { 0 };
//    gets(arr);
//    int len = strlen(arr);
//
//    //��������
//    char* left = arr;
//    char* right = arr + len - 1;
//    reverse_string(left, right);
//
//    //��ÿ����������
//    left = arr;
//    right = arr;
//    while (1)
//    {
//        while (*right != ' ' && *right != '\0')
//        {
//            right++;
//        }
//        reverse_string(left, right - 1);
//        if (*right != '\0')
//        {
//            right++;
//            left = right;
//        }
//        else
//        {
//            break;
//        }
//    }
//    printf("%s\n", arr);
//
//    return 0;
//}
//


//
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//#include <assert.h>
//
//int my_strlen(char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	assert(str);
//	int len = my_strlen(str);
//	char tmp = *str;
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) > 1)
//		reverse_string(str + 1);
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}
//
//

//
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//int DigitSum(int n)
//{
//	if (n <= 9)
//	{
//		return n;
//	}
//	else
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//float Power(int n, int k)
//{
//	if (k == 0)
//		return 1;
//	else if (k > 0)
//		return Power(n, k - 1) * n;
//	else
//		return 1 / Power(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	float ret = Power(n, k);
//	printf("%f\n", ret);
//
//	return 0;
//}
//

//
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//�ݹ�
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//�ǵݹ�
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n-- > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}
//