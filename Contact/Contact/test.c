﻿#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("******************************\n");
	printf("****  1. add     2. del  *****\n");
	printf("****  3. search  4. modify****\n");
	printf("****  5. show    6. sort   ***\n");
	printf("****  0. exit               **\n");
	printf("******************************\n");
}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

int main()
{
	int input = 0;
	//创建一个通讯录
	struct Contact con;
	//初始化通讯录
	InitContact(&con);
	//最多可以放3个人的信息了
	//空间不够可以增容

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			//保存信息
			SaveContact(&con);
			//销毁通讯录
			DestroyContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}

//
//文件的版本
//1. 退出通讯录的时候，保存信息到文件中
//2. 运行起来通讯录的时候，加载文件中的信息到通讯录中
//