#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

//静态的版本
//void InitContact(struct Contact* pc)
//{
//  assert(pc);
//	pc->sz = 0;//默认没有信息
//	//memset(pc->data, 0, MAX*sizeof(struct PeoInfo));
//	memset(pc->data, 0, sizeof(pc->data));
//}

void CheckCapacity(struct Contact* pc)
{
	assert(pc);

	if (pc->sz == pc->capacity)
	{
		//增加容量
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(pc->data, (pc->capacity + 2) * sizeof(struct PeoInfo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity += 2;

			printf("增容成功\n");
		}
		else
		{
			perror("通讯录增容失败");
			exit(1);
		}
	}
}

void LoadContact(struct Contact* pc)
{
	assert(pc);

	//打开文件
	FILE* pf = fopen("contact.txt", "rb");
	if (NULL == pf)
	{
		perror("LoadContact::fopen");
		return;
	}
	//读文件
	struct PeoInfo tmp = { 0 };
	while (fread(&tmp, sizeof(struct PeoInfo), 1, pf))
	{
		//空间如果不够的话，得增加空间
		CheckCapacity(pc);

		pc->data[pc->sz] = tmp;
		pc->sz++;
	}

	//关闭文件
	fclose(pf);
	pf = NULL;
}

//动态的版本
void InitContact(struct Contact* pc)
{
	assert(pc);

	pc->sz = 0;
	pc->data = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	pc->capacity = DEFAULT_SZ;//3

	//加载文件信息到通讯录中
	LoadContact(pc);
}

//静态的版本
//void AddContact(struct Contact* pc)
//{
//  assert(pc);
// 
//	struct PeoInfo tmp = {0};
//
//	if (pc->sz == MAX)
//	{
//		printf("通讯录满了\n");
//	}
//	else
//	{
//		printf("请输入名字:>");
//		scanf("%s", tmp.name);
//		printf("请输入年龄:>");
//		scanf("%d", &(tmp.age));
//		printf("请输入性别:>");
//		scanf("%s", tmp.sex);
//		printf("请输入电话:>");
//		scanf("%s", tmp.tele);
//		printf("请输入地址:>");
//		scanf("%s", tmp.addr);
//
//		pc->data[pc->sz] = tmp;
//		//
//		printf("添加成功\n");
//		pc->sz++;
//	}
//
//
//	//if (pc->sz == MAX)
//	//{
//	//	printf("通讯录满了\n");
//	//}
//	//else
//	//{
//	//	printf("请输入名字:>");
//	//	scanf("%s", pc->data[pc->sz].name);
//	//	printf("请输入年龄:>");
//	//	scanf("%d", &(pc->data[pc->sz].age));
//	//	printf("请输入性别:>");
//	//	scanf("%s", pc->data[pc->sz].sex);
//	//	printf("请输入电话:>");
//	//	scanf("%s", pc->data[pc->sz].tele);
//	//	printf("请输入地址:>");
//	//	scanf("%s", pc->data[pc->sz].addr);
//
//	//	//
//	//	printf("添加成功\n");
//	//	pc->sz++;
//	//}
//}

//动态增长的版本
void AddContact(struct Contact* pc)
{
	assert(pc);

	CheckCapacity(pc);
	//录入新增人的信息
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);

	pc->sz++;
	printf("增加成功\n");
}

void DestroyContact(struct Contact* pc)
{
	assert(pc);

	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}

void ShowContact(struct Contact* pc)
{
	assert(pc);

	int i = 0;
	printf("%15s\t%5s\t%8s\t%15s\t%30s\n\n",
		"name", "age", "sex", "tele", "addr");
	for (i = 0; i < pc->sz; i++)
	{
		//打印每一个数据
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

int FindContactByName(const struct Contact* pc, const char* name)
{
	assert(pc && name);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	//找不到了
	return -1;
}

void DelContact(struct Contact* pc)
{
	assert(pc);

	if (pc->sz == 0)
	{
		printf("通讯录为空，无法删除\n");
		return;
	}
	char name[NAME_MAX] = { 0 };
	printf("请输入要删除人的名字：>");
	scanf("%s", name);
	//查找
	int pos = FindContactByName(pc, name);
	if (pos == -1)
	{
		printf("指定的联系人不存在\n");
	}
	else
	{
		//删除
		int j = 0;
		for (j = pos; j < pc->sz - 1; j++)
		{
			pc->data[j] = pc->data[j + 1];
		}
		pc->sz--;
		//
		printf("删除成功\n");
	}
}

void SearchContact(const struct Contact* pc)
{
	assert(pc);

	char name[NAME_MAX] = { 0 };
	printf("输入要查找人的名字:>");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (-1 == pos)
	{
		printf("查无此人\n");
	}
	else
	{
		printf("%15s\t%5s\t%8s\t%15s\t%30s\n\n",
			"name", "age", "sex", "tele", "addr");
		printf("%15s\t%5d\t%8s\t%15s\t%30s\n",
			pc->data[pos].name,
			pc->data[pos].age,
			pc->data[pos].sex,
			pc->data[pos].tele,
			pc->data[pos].addr);
	}
}

void ModifyContact(struct Contact* pc)
{
	assert(pc);

	char name[NAME_MAX] = { 0 };
	printf("输入要修改人的名字:>");
	scanf("%s", name);
	int pos = FindContactByName(pc, name);
	if (-1 == pos)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入新的名字:>");
		scanf("%s", pc->data[pos].name);
		printf("请输入新的年龄:>");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入新的性别:>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入新的电话:>");
		scanf("%s", pc->data[pos].tele);
		printf("请输入新的地址:>");
		scanf("%s", pc->data[pos].addr);
	}
}

int SortByName(const void* e1, const void* e2)
{
	assert(e1 && e2);

	return strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);
}

void SortContact(struct Contact* pc)
{
	assert(pc);
	//按照名字来排序

	qsort(pc->data, pc->sz, sizeof(pc->data[0]), SortByName);
	printf("已经按照名字排序\n");
}

void SaveContact(struct Contact* pc)
{
	//打开文件
	FILE* pf = fopen("contact.txt", "wb");
	if (NULL == pf)
	{
		perror("SaveContact::fopen");
		return;
	}

	//写数据
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		//fwrite(&(pc->data[i]), sizeof(struct PeoInfo), 1, pf);
		fwrite(pc->data + i, sizeof(struct PeoInfo), 1, pf);
	}

	//关闭文件
	fclose(pf);
	pf = NULL;
}
