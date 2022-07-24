#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//	}
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//
//	do
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//#include <limits.h>
//
////INT_MAX
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}
//


//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//
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
//
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//
//	return 0;
//}
//

#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
	char arr1[] = "hello world!!!!!!";
	char arr2[] = "#################";
	
	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}

	printf("%s\n", arr2);

	return 0;
}


