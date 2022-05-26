#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//չʾ��������
#define ROW 9 
#define COL 9

//ʵ�ʴ�����������
#define ROWS (ROW + 2)
#define COLS (COL + 2)

 //�׵ĸ���
#define EASY_COUNT 10

//��ʼ��
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//��ӡ
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//������
void SetMine(char board[ROWS][COLS], int row, int col);

//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
