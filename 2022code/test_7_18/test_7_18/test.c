#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	return 0;
//}


//int main()
//{
//	//int a = 100;
//	//char ch = 'c';
//	//"abcdef";
//	//3.14;
//
//	//const int n = 10;
//	//printf("n=%d\n", n);
//	//n = 20;
//	//printf("n=%d\n", n);
//
//	//const int n = 10;
//	//int arr[n] = { 0 };
//	//int arr[10] = { 0 };
//
//	return 0;
//}


//#define MAX 100
//
//int main()
//{
//	//MAX = 101;//err
//	int m = MAX;
//	printf("%d\n", m);
//	printf("%d\n", MAX);
//
//	return 0;
//}
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//enum COLOR
//{
//	RED,
//	GREEM,
//	BLUE
//};
//
//int main()
//{
//	enum Sex s = MALE;
//
//	//MALE = 5;//err
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'};
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}


//int main()
//{
//	//printf("c:\\test\\test.c");
//	//printf("abcndef");
//	//printf("abc\ndef");
//	//printf("(are you ok\?\?)");
//	//printf("%c\n", 'a');
//	//printf("%c\n", '\'');
//	//printf("%s\n", "abc");
//	//printf("%s\n", "a");
//	//printf("%s\n", "\"");
//
//	//printf("%c\n", '\a');
//	//printf("%c\n", '\a');
//	//printf("%c\n", '\a');
//	//printf("%c\n", '\a');
//	//printf("\a\a\a\a\a");
//
//	//printf("%c\n", '\135');
//	printf("%c\n", '\x42');
//
//	return 0;
//}


#include <string.h>

//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0'};
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}

//
//int main()
//{
//	int input = 0;
//	printf("你会好好学习吗？(1/0):>");
//	scanf("%d", &input);
//
//	if (1 == input)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}



//int main()
//{
//	int line = 0;
//
//	while (line < 20000)
//	{
//		//if (line == 1000)
//		//	break;
//		printf("敲代码:%d\n", line);
//		line++;
//	}
//
//	if (line >= 20000)
//		printf("好offer\n");
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int Add(int x, int y)
//{
//	//int z = x + y;
//	//return z;
//	return x + y;
//}
//
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int sum = 0;
//
//	scanf("%d%d", &n1, &n2);
//	//sum = n1 + n2;
//	//函数
//	sum = Add(n1, n2);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//


//int main()
//{
//	//int a = 10;
//	//int b = 11;
//	//int c = 12;
//	//...
//
//	int arr[10] = { 10,11,12,13,14,15,16,17,18,19 };
//	int i = 0;
//
//	while (i < 10)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//
//	i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//	//printf("%d\n", arr[5]);
//	
//	//char ch[] = { 'a', 'b', 'c', 'd', 'x', 'y'};
//
//	return 0;
//}

//
//int main()
//{
//	//int c = 10 / 3;
//	//printf("%d\n", c);
//	float c = 10 / 3.0;
//	printf("%f\n", c);
//
//	return 0;
//}


//int main()
//{
//	int a = 10 % 3;
//	printf("%d\n", a);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	a = a + 10;
//	a += 10;
//	a -= 2;
//	a = a - 2;
//
//	//a = 20;
//	return 0;
//}
//

//
//int missingNumber(int* nums, int numsSize)
//{
//	int x = 0;
//	for (int i = 0; i < numsSize; ++i)
//	{
//		x ^= nums[i];
//	}
//	for (int j = 0; j <= numsSize; ++j)
//	{
//		x ^= j;
//	}
//	return x;
//}
//
//int main()
//{
//	int arr[] = { 6,1,4,2,5,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int num = missingNumber(arr, sz);
//	printf("%d\n", num);
//
//	return 0;
//}
//




