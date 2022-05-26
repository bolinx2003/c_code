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
	printf("-------ɨ����Ϸ-----\n");
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
	printf("-------ɨ����Ϸ-----\n");

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
//û�б�Ǻ�չ��һƬ�İ汾
//void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int win = 0;//�ҵ����׵ĸ���
//	while (win < row * col - EASY_COUNT)
//	{
//		printf("������Ҫ�Ų������:>");
//		scanf("%d%d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)
//		{
//			if (show[x][y] != '*')
//			{
//				printf("�����걻�Ų���ˣ������ظ��Ų�\n");
//			}
//			else
//			{
//				//�������
//				if (mine[x][y] == '1')
//				{
//					printf("���ź����㱻ը����\n");
//					DisplayBoard(mine, ROW, COL);
//					break;
//				}
//				else//���������
//				{
//					win++;
//					//ͳ��mine������x,y������Χ�м�����
//					int count = get_mine_count(mine, x, y);
//					show[x][y] = count + '0';//ת���������ַ�
//					DisplayBoard(show, ROW, COL);
//				}
//			}
//		}
//		else
//		{
//			printf("���������Ƿ�,����������\n");
//		}
//	}
//	if (win == row * col - EASY_COUNT)
//	{
//		printf("��ϲ�㣬���׳ɹ�\n");
//		DisplayBoard(mine, ROW, COL);
//	}
//}
//

//
//�����Ĺ���
//1. ��ǹ���
//2. չ��һƬ�Ĺ���
//

//
//չ��һƬ���ݹ飩
//1.�����겻����
//2.��������Χû����
//3.������û�б��Ų��
//4.������û��Խ��
//

//Ӯ�˷���1
static int IsWin(char show[ROWS][COLS], int row, int col)
{
	int count = 0;//ͳ���ҳ�����λ�õĸ���
	int i = 0;
	int j = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			//show�������
			//�ո� -> һ��������
			//���� -> һ��������
			//* -> ��������
			//? -> ��������
			if (show[i][j] != '*' && show[i][j] != '?')
			{
				//һ��������
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
	//����������µ���
	int count = get_mine_count(mine, x, y);
	if (count == 0)
	{
		//��Χû����
		show[x][y] = ' ';
		//û�б��Ų����ûԽ��
		//����
		if (x - 1 > 0 && y - 1 > 0 && show[x - 1][y - 1] == '*')
			OpenUp(mine, show, row, col, x - 1, y - 1);
		//��
		if (x - 1 > 0 && show[x - 1][y] == '*')
			OpenUp(mine, show, row, col, x - 1, y);
		//����
		if (x - 1 > 0 && y + 1 <= col && show[x - 1][y + 1] == '*')
			OpenUp(mine, show, row, col, x - 1, y + 1);
		//��
		if (y - 1 > 0 && show[x][y - 1] == '*')
			OpenUp(mine, show, row, col, x, y - 1);
		//��
		if (y + 1 <= col && show[x][y + 1] == '*')
			OpenUp(mine, show, row, col, x, y + 1);
		//����
		if (x + 1 <= row && y - 1 > 0 && show[x + 1][y - 1] == '*')
			OpenUp(mine, show, row, col, x + 1, y - 1);
		//��
		if (x + 1 <= row && show[x + 1][y] == '*')
			OpenUp(mine, show, row, col, x + 1, y);
		//����
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
		printf("��ѡ���Ƿ���(1/0):>");
		scanf("%d", &sign);
		switch (sign)
		{
		case 1:
			printf("������Ҫ��ǵ�����:>");
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
					show[x][y] = '*';//ȡ�����
					DisplayBoard(show, ROW, COL);
				}
				else
				{
					printf("�������ѱ��Ų�\n");
				}
			}
			else
			{
				printf("����Ƿ�\n");
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
		printf("������Ҫ�Ų������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//��֤��Խ��
		{
			if (show[x][y] != '*')
			{
				printf("�������ѱ��Ų飬����������\n");
			}
			else
			{
				if (mine[x][y] == '1')//�������
				{
					printf("���ź�,�㱻ը����\n");
					DisplayBoard(mine, row, col);
					break;
				}
				else//���������
				{
					OpenUp(mine, show, row, col, x, y);//��������겻���ף���Χû���ף�ʵ�ִ�һƬ
					int win = IsWin(show, row, col);
					if (win == 1)
					{
						printf("��ϲ�㣬���׳ɹ�\n");
						DisplayBoard(mine, row, col);
						return;
					}
					DisplayBoard(show, row, col);
					SignMine(show, row, col);//�����
					DisplayBoard(show, row, col);
				}
			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}
}

