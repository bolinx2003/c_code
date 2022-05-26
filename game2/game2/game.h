#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//展示的行列数
#define ROW 9 
#define COL 9

//实际创建的行列数
#define ROWS (ROW + 2)
#define COLS (COL + 2)

 //雷的个数
#define EASY_COUNT 10

//初始化
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//设置雷
void SetMine(char board[ROWS][COLS], int row, int col);

//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
