#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//#include <string.h>
//
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "abcdef") == 0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else if (i < 2)
//		{
//			printf("密码错误，重新输入\n");
//		}
//	}
//
//	if (i == 3)
//	{
//		printf("三次密码均输入错误，退出程序\n");
//	}
//
//	return 0;
//}
//


//
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("***********************\n");
//	printf("***** 1.play      *****\n");
//	printf("***** 0.exit      *****\n");
//	printf("***********************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//
//	while (1)
//	{
//		printf("猜数字:>");
//		scanf("%d", &guess);
//		
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
//	srand((unsigned int)time(NULL));
//	int input = 0;
//
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
//			printf("选择错误，重新选择！\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//
//
//#include <time.h>
//
//int main()
//{
//	//time_t t = time(NULL);
//	time_t t;
//	time(&t);
//
//	return 0;
//}
//
//


//
//int main()
//{
//again:
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	goto again;
//
//	return 0;
//}



#include <stdlib.h>
#include <string.h>

//int main()
//{
//	char input[100] = { 0 };
//
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//
//int main()
//{
//	char input[100] = { 0 };
//
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("请注意，你的电脑将在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}
//


