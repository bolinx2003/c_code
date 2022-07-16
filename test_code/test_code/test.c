#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

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
//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
// 
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
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
// 
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
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
// 
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
//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
// 
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
//递归和非递归分别实现求第n个斐波那契数
// 
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

//实现一个对整形数组的冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int flag = 1;//假设已经有序
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 0;
//				//交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (1 == flag)
//		{
//			return;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//冒泡排序，排成升序
//	bubble_sort(arr, sz);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//
//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int* ptr, int sz)
//{
//	int* left = ptr;
//	int* right = ptr + sz - 1;
//
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	reverse(arr, sz);
//	print(arr, sz);//10~1
//	init(arr, sz);
//	print(arr, sz);//全0
//
//	return 0;
//}
//


//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//int main()
//{
//	int arr1[5] = { 1,3,5,7,9 };
//	int arr2[5] = { 2,4,6,8,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//
//    int count = 0;
//    int i = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if (((a >> i) & 1) != ((b >> i) & 1))
//            count++;
//    }
//    printf("%d\n", count);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//
//    int count = 0;
//    int tmp = a ^ b;
//
//    //求tmp中1的个数
//    while (tmp)
//    {
//        tmp = tmp & (tmp - 1);//拿走最右边的1
//        count++;
//    }
//    printf("%d\n", count);
//
//    return 0;
//}


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	//偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//
//	return 0;
//}


//int NumberOf1(int n) {
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if (((n >> i) & 1) == 1)
//            count++;
//    }
//    return count;
//}
//
//int NumberOf1(int n) {
//    unsigned int m = (unsigned int)n;
//    int count = 0;
//
//    while (m)
//    {
//        if (m % 2 == 1)
//            count++;
//        m /= 2;
//    }
//    return count;
//}
//
//int NumberOf1(int n) {
//    int count = 0;
//    while (n)
//    {
//        n = n & (n - 1);//去掉最右边的1
//        count++;
//    }
//    return count;
//}

//不允许创建临时变量，交换两个整数的内容
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("交换前:a=%d,b=%d\n", a, b);
//	//交换
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后:a=%d,b=%d\n", a, b);
//
//	return 0;
//}


//
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//


//#include <stdio.h>
//#include <string.h>
//
//void reverse_string(char* str)
//{
//    int len = strlen(str);
//    char* left = str;
//    char* right = str + len - 1;
//
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
//    char arr[10001] = { 0 };
//    gets(arr);
//
//    reverse_string(arr);
//    printf("%s\n", arr);
//
//    return 0;
//}


//
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		n = n * 10 + a;
//		sum += n;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
//


//
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//计算i的位数
//		int tmp = i;
//		int n = 1;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		
//		int sum = 0;
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}
//
//


//int main()
//{
//	int n = 0;//上半部分共几行
//	scanf("%d", &n);
//
//	//上半部分
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			printf(" ");
//		}
//
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//下半部分
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//
//		for (j = 0; j < 2 * (n - i) - 3; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);//20
//	int total = 0;
//	if (money >= 1)
//	{
//		//买汽水 - 20
//		total = money;
//		//空瓶 - 20
//		int bottle = total;
//
//		//2个空瓶以上才可以换
//		while (bottle >= 2)
//		{
//			//拿空瓶来换
//			total += (bottle / 2);
//			bottle -= (bottle / 2);
//		}
//	}
//	else
//	{
//		total = 0;
//	}
//	printf("%d\n", total);
//
//	return 0;
//}
//


//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int* left = arr;
//	int* right = arr + sz - 1;
//
//	while (left < right)
//	{
//		//前面找一个偶数
//		if (((*left) % 2 == 1) && (left < right))
//		{
//			left++;
//		}
//		//后面找一个奇数
//		if (((*right) % 2 == 0) && (left < right))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//
//


//模拟实现库函数strlen
//#include <string.h>
//#include <assert.h>
//
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//


//模拟实现库函数strcpy
//#include <string.h>
//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[20] = { 0 };
//
//	my_strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}
//


//
//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
//……
//
//int main()
//{
//	int arr[9][9] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			//第一列
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			//主对角线
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (j > 0)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//

//
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//
//int main()
//{
//	char murderer = 0;
//	for (murderer = 'A'; murderer <= 'D'; murderer++)
//	{
//		if ((murderer != 'A') + (murderer == 'C') + (murderer == 'D') + (murderer != 'D') == 3)
//		{
//			printf("%c\n", murderer);
//		}
//	}
//	return 0;
//}
//
//


//
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1)
//							&& a * b * c * d * e == 1 * 2 * 3 * 4 * 5)
//						{
//							printf("%d %d %d %d %d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
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
//    int n = 0;
//    scanf("%d", &n);
//    printf("%d\n", 1 << n);
//
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int score = 0;
//    int sum = 0;
//    int count = 0;
//    int max = 0;
//    int min = 100;
//    while (~scanf("%d", &score))
//    {
//        sum += score;
//        count++;
//        if (score > max)
//        {
//            max = score;
//        }
//        if (score < min)
//        {
//            min = score;
//        }
//        if (count == 7)
//        {
//            printf("%.2f\n", (sum - max - min) / 5.0);
//            max = 0;
//            min = 100;
//            sum = 0;
//            count = 0;
//        }
//    }
//
//    return 0;
//}
//


//#include <stdio.h>
//
//int is_leap_year(int year)
//{
//    return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
//}
//
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int day = 0;
//    int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    while (~scanf("%d %d", &year, &month))
//    {
//        //闰年二月
//        if (is_leap_year(year) == 1 && month == 2)
//        {
//            day = 29;
//        }
//        else
//        {
//            day = days[month - 1];
//        }
//        printf("%d\n", day);
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    char ch = 0;
//    scanf("%c", &ch);
//    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//        printf("YES\n");
//    else
//        printf("NO\n");
//
//    return 0;
//}


//14610 16420 23610 34420 65500
//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    for (i = 10000; i <= 99999; i++)
//    {
//        int sum = 0;
//        int n = 0;
//        for (n = 10; n <= 10000; n *= 10)
//        {
//            sum = sum + (i % n) * (i / n);
//        }
//        if (sum == i)
//            printf("%d ", i);
//    }
//
//    return 0;
//}


//实现一个函数，可以左旋字符串中的k个字符。
//#include <string.h>
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* str, int k)
//{
//	int len = strlen(str);
//	k %= len;
//	reverse(str, str + k - 1);
//	reverse(str + k, str + len - 1);
//	reverse(str, str + len - 1);
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	int k = 0;
//	scanf("%d", &k);
//
//	left_move(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}


//
//有一个数字矩阵，矩阵的每行从左到右是递增的，
//矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);
//
//void find_k(int arr[3][3], int k, int* px, int* py)
//{
//	//右上角
//	int x = 0;
//	int y = *py - 1;
//	while (x<*px && y>=0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			//找到了
//			*px = x;
//			*py = y;
//			return;
//		}
//	}
//	//找不到
//	*px = -1;
//	*py = -1;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6}, {7,8,9} };
//	int x = sizeof(arr) / sizeof(arr[0]);
//	int y = sizeof(arr[0]) / sizeof(arr[0][0]);
//
//	int k = 0;
//	scanf("%d", &k);
//
//	find_k(arr, k, &x, &y);
//	if (x == -1 && y == -1)
//	{
//		printf("找不到了\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d %d\n", x, y);
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
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j <= i; j++)
//            {
//                if (j == 0 || i == n - 1 || i == j)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[n];
//    int arr2[m];
//
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//
//    i = 0;
//    j = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//
//    if (i == n)
//    {
//        for (; j < m; j++)
//        {
//            printf("%d ", arr2[j]);
//        }
//    }
//    else
//    {
//        for (; i < n; i++)
//        {
//            printf("%d ", arr1[i]);
//        }
//    }
//
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[n];
//    int del = 0;
//
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    scanf("%d", &del);
//
//    i = 0;//遍历数组
//    j = 0;//可以保存的位置
//
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != del)
//        {
//            arr[j] = arr[i];
//            j++;
//        }
//    }
//
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}


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
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (i == j || i + j == n - 1)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}


//
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
//
//#include <assert.h>
//#include <string.h>
//#include <stdlib.h>
//
//int is_left_move(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//
//	if (strlen(s1) != strlen(s2))
//	{
//		return 0;
//	}
//
//	char* buf = (char*)malloc(strlen(s1) * 2 + 1);
//	if (buf == NULL)
//	{
//		perror("is_left_move::malloc");
//		return;
//	}
//	strcpy(buf, s1);
//	strncat(buf, s1, strlen(s1));
//	char* ret = strstr(buf, s2);
//	free(buf);
//	buf = NULL;
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char* s1 = "AABCD";
//	char* s2 = "BCDAA";
//
//	int ret = is_left_move(s1, s2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//
//	return 0;
//}
//
//


//
//模仿qsort的功能实现一个通用的冒泡排序
// 
//#include <stdlib.h>
//#include <string.h>
//#include <assert.h>
//
//int cmp_int(const void* e1, const void* e2)
//{
//	assert(e1 && e2);
//
//	return *(int*)e1 - *(int*)e2;
//}
//
//void Swap(void* e1, void* e2, int width)
//{
//	assert(e1 && e2);
//
//	void* buf = malloc(width);
//	if (buf == NULL)
//	{
//		perror("malloc");
//		return;
//	}
//
//	memcpy(buf, e1, width);
//	memcpy(e1, e2, width);
//	memcpy(e2, buf, width);
//
//	free(buf);
//	buf = NULL;
//}
//
//void bubble_sort(void* base, int sz, int width, int (*p)(const void*, const void*))
//{
//	assert(p != NULL);
//
//	int i = 0;
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if ((*p)((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				flag = 0;
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//		if (flag == 1)
//			return;
//	}
//}
//
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	float score;
//} s1 = { "张三", 50.5f },
//s2 = { "李四", 64.5f },
//s3 = { "王五", 45.0f };
//
//int cmp_by_score(const void* e1, const void* e2)
//{
//	assert(e1 && e2);
//
//	return ((struct Stu*)e1)->score - ((struct Stu*)e2)->score;
//}
//
//void print(struct Stu* ps)
//{
//	assert(ps != NULL);
//
//	printf("%s %f\n", ps->name, ps->score);
//}
//
//void test2()
//{
//	struct Stu s[] = { s1, s2, s3 };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_by_score);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		print(&s[i]);
//	}
//}
//
//int main()
//{
//	test2();
//
//	return 0;
//}
//


//模拟实现strlen
//#include <string.h>
//#include <assert.h>
//
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//


//模拟实现strcpy
//#include <string.h>
//#include <assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[20] = { 0 };
//	//my_strcpy(arr2, arr1);
//
//	printf("%s\n", my_strcpy(arr2, arr1));
//	
//	return 0;
//}


//模拟实现strcmp
//#include <string.h>
//#include <assert.h>
//
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1 && s2);
//
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0' && *s2 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	int ret = my_strcmp("abcdef", "abcq");
//	if (ret > 0)
//	{
//		printf(">\n");
//	}
//	else if (ret == 0)
//	{
//		printf("=\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//模拟实现strcat
//#include <string.h>
//#include <assert.h>
//
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//
//	char* ret = dest;
//	//找\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//拷贝
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = " world!";
//
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}
//


//模拟实现strstr
//#include <string.h>
//#include <assert.h>
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* cur = str1;
//
//	while (*cur)
//	{
//		//回退
//		s1 = cur;
//		s2 = str2;
//		while (s1 && s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cur;
//		}
//		cur++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "bbc";
//	char arr2[] = "abcabbbcde";
//	char* ret = my_strstr(arr2, arr1);
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了\n%s\n", ret);
//	}
//
//	return 0;
//}
//


//模拟实现memmove
//#include <string.h>
//#include <assert.h>
//
//void* my_memmove(void* dest, const void* src, int count)
//{
//	assert(dest && src);
//
//	void* ret = dest;
//	if (dest > src)
//	{
//		//从右到左
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	else
//	{
//		//从左到右
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1 + 2, arr1, 5 * sizeof(arr1[0]));
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	int arr2[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr2, arr2 + 2, 5 * sizeof(arr2[0]));
//	sz = sizeof(arr2) / sizeof(arr2[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	
//	return 0;
//}
//

//
//memmove和memcpy的区别：
//memmove 源头和目标的空间可以重合，memcpy不行
//

//模拟实现memcpy
//#include <string.h>
//#include <assert.h>
//
//void* my_memcpy(void* dest, const void* src, int count)
//{
//	assert(dest && src);
//
//	void* ret = dest;
//
//	//从左到右
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 10 * sizeof(arr1[0]));
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}
//

