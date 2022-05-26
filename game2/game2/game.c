#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------扫雷游戏-----\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------扫雷游戏-----\n");

}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	//1~9
	//1~9
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

static int get_mine_count(char board[ROWS][COLS], int x, int y)
{
	/*return (board[x - 1][y] +
		board[x - 1][y - 1] +
		board[x][y - 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] +
		board[x][y + 1] +
		board[x - 1][y + 1] - 8 * '0');*/

	int i = 0;
	int count = 0;
	for (i = -1; i <= 1; i++)
	{
		int j = 0;
		for (j = -1; j <= 1; j++)
		{
			count += board[x + i][y + j];
		}
	}
	return count - 9 * '0';
}

//
//没有标记和展开一片的版本
//void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int win = 0;//找到非雷的个数
//	while (win < row * col - EASY_COUNT)
//	{
//		printf("请输入要排查的坐标:>");
//		scanf("%d%d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (show[x][y] != '*')
//			{
//				printf("该坐标被排查过了，不能重复排查\n");
//			}
//			else
//			{
//				//如果是雷
//				if (mine[x][y] == '1')
//				{
//					printf("很遗憾，你被炸死了\n");
//					DisplayBoard(mine, ROW, COL);
//					break;
//				}
//				else//如果不是雷
//				{
//					win++;
//					//统计mine数组中x,y坐标周围有几个雷
//					int count = get_mine_count(mine, x, y);
//					show[x][y] = count + '0';//转换成数字字符
//					DisplayBoard(show, ROW, COL);
//				}
//			}
//		}
//		else
//		{
//			printf("输入的坐标非法,请重新输入\n");
//		}
//	}
//	if (win == row * col - EASY_COUNT)
//	{
//		printf("恭喜你，排雷成功\n");
//		DisplayBoard(mine, ROW, COL);
//	}
//}
//

//
//基础的功能
//1. 标记功能
//2. 展开一片的功能
//

//
//展开一片（递归）
//1.该坐标不是雷
//2.该坐标周围没有雷
//3.该坐标没有被排查过
//4.该坐标没有越界
//

//赢了返回1
static int IsWin(char show[ROWS][COLS], int row, int col)
{
	int count = 0;//统计找出非雷位置的个数
	int i = 0;
	int j = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			//show中情况：
			//空格 -> 一定不是雷
			//数字 -> 一定不是雷
			//* -> 可能是雷
			//? -> 可能是雷
			if (show[i][j] != '*' && show[i][j] != '?')
			{
				//一定不是雷
				count++;
			}
		}
	}
	
	if (count == ROW * COL - EASY_COUNT)
		return 1;
	else
		return 0;
}

static void OpenUp(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y)
{
	//不是雷情况下调用
	int count = get_mine_count(mine, x, y);
	if (count == 0)
	{
		//周围没有雷
		show[x][y] = ' ';
		//没有被排查过且没越界
		//左上
		if (x - 1 > 0 && y - 1 > 0 && show[x - 1][y - 1] == '*')
			OpenUp(mine, show, row, col, x - 1, y - 1);
		//上
		if (x - 1 > 0 && show[x - 1][y] == '*')
			OpenUp(mine, show, row, col, x - 1, y);
		//右上
		if (x - 1 > 0 && y + 1 <= col && show[x - 1][y + 1] == '*')
			OpenUp(mine, show, row, col, x - 1, y + 1);
		//左
		if (y - 1 > 0 && show[x][y - 1] == '*')
			OpenUp(mine, show, row, col, x, y - 1);
		//右
		if (y + 1 <= col && show[x][y + 1] == '*')
			OpenUp(mine, show, row, col, x, y + 1);
		//左下
		if (x + 1 <= row && y - 1 > 0 && show[x + 1][y - 1] == '*')
			OpenUp(mine, show, row, col, x + 1, y - 1);
		//下
		if (x + 1 <= row && show[x + 1][y] == '*')
			OpenUp(mine, show, row, col, x + 1, y);
		//右下
		if (x + 1 <= row && y + 1 <= col && show[x + 1][y + 1] == '*')
			OpenUp(mine, show, row, col, x + 1, y + 1);
	}
	else
	{
		show[x][y] = count + '0';
	}
}

static void SignMine(char show[ROWS][COLS], int row, int col)
{
	int sign = 0;
	do
	{
		printf("请选择是否标记(1/0):>");
		scanf("%d", &sign);
		switch (sign)
		{
		case 1:
			printf("请输入要标记的坐标:>");
			int x = 0;
			int y = 0;
			scanf("%d %d", &x, &y);
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (show[x][y] == '*')
				{
					show[x][y] = '?';
					DisplayBoard(show, ROW, COL);
				}
				else if (show[x][y] == '?')
				{
					show[x][y] = '*';//取消标记
					DisplayBoard(show, ROW, COL);
				}
				else
				{
					printf("该坐标已被排查\n");
				}
			}
			else
			{
				printf("坐标非法\n");
			}
			break;
		case 0:
			break;
		default:
			break;
		}
	} while (sign);
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("请输入要排查的坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//保证不越界
		{
			if (show[x][y] != '*')
			{
				printf("该坐标已被排查，请重新输入\n");
			}
			else
			{
				if (mine[x][y] == '1')//如果是雷
				{
					printf("很遗憾,你被炸死了\n");
					DisplayBoard(mine, row, col);
					break;
				}
				else//如果不是雷
				{
					OpenUp(mine, show, row, col, x, y);//如果该坐标不是雷，周围没有雷，实现打开一片
					int win = IsWin(show, row, col);
					if (win == 1)
					{
						printf("恭喜你，排雷成功\n");
						DisplayBoard(mine, row, col);
						return;
					}
					DisplayBoard(show, row, col);
					SignMine(show, row, col);//标记雷
					DisplayBoard(show, row, col);
				}
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
}

