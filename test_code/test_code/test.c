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
//写一个函数求两个整数的较大值
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
//        //处理一个学生的成绩
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
//写代码将三个整数数按从大到小输出
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
//写一个代码打印1-100之间所有3的倍数的数字
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
//给定两个数，求这两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//求最大公约数
//	//方法1:
//	//假设是小的数
//	/*int m = a > b ? b : a;
//	while (a%m!=0 || b%m!=0)
//	{
//		m--;
//	}
//	printf("%d\n", m);*/
//
//	//方法2
//	//辗转相除法
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
//打印1000年到2000年之间的闰年
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
//写一个代码：打印100~200之间的素数
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
//	int count = 0;//素数个数
//	for (i = 101; i < 200; i += 2)
//	{
//		int flag = 1;//假设是素数
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
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
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
//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
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
//求10 个整数中最大值
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//求最大值
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
//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;//行
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;//列
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
//猜数字游戏
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
//	//生成随机数
//	int ret = rand() % 100 + 1;//1~100
//	//猜数字
//	while (1)
//	{
//		int guess = 0;
//		printf("猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	//设置随机数生成器
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//

//
//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;//要查找的数
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//二分查找
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
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到了\n");
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
//        getchar();//处理\n
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
//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
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
//实现函数判断year是不是润年。
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
//实现一个函数来交换两个整数的内容。
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
//	printf("交换前:a=%d b=%d\n", a, b);
//	//交换
//	Swap(&a, &b);
//	printf("交换后:a=%d b=%d\n", a, b);
//	return 0;
//}
//

//
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
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
//递归方式实现打印一个整数的每一位
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
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//非递归
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
//递归
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
//递归和非递归分别实现strlen
//#include <string.h>
//
//非递归
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
//递归
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
//求最小公倍数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	//求最小公倍数
//	//方法1：
//	//假设是大的数
//	/*int m = a > b ? a : b;
//	while (m%a!=0 || m%b!=0)
//	{
//		m++;
//	}
//	printf("%d\n", m);*/
//
//	//方法2：
//	/*int i = 1;
//	while (a*i%b != 0)
//	{
//		i++;
//	}
//	printf("%d\n", a * i);*/
//
//	//方法3：
//	int m = 0;
//	int a1 = a;
//	int b1 = b;
//	while (m = a%b)
//	{
//		a = b;
//		b = m;
//	}
//	//此时b为最大公约数
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
//    //整体逆序
//    char* left = arr;
//    char* right = arr + len - 1;
//    reverse_string(left, right);
//
//    //对每个单词逆序
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
//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
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
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
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
//编写一个函数实现n的k次方，使用递归实现。
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
//递归和非递归分别实现求第n个斐波那契数
//递归
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//非递归
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