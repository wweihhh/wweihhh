#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
#include<string.h>
#include<stdlib.h>

void InitBoard(char board[ROW][COL])
{
	memset(board, ' ', ROW*COL*sizeof(board[0][0]));

}

void Displayboard(char board[ROW][COL])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (i < ROW - 1)
			{
				printf("_%c_", board[i][j]);
			}
			else 
			{
				printf(" %c ", board[i][j]);
			}
			if (j < COL-1)
			{
				printf("|");
			}
		}
		printf("\n");
	}
	printf("\n");
}


void PlayerMove(char board[ROW][COL])
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("please input coordinate: ");
		scanf("%d %d",&x,&y);
		if (x > 0 && x<4 && y>0 && y < 4)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '#';
				break;
			}
		}
		else
			printf("重新输入坐标：");
		
	}
}


void ComputerMove(char board[ROW][COL])
{
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '*';
			break;
		}
	}
}

int Isfull(char board[ROW][COL])
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
		return 1;
}

char Is_win(char board[ROW][COL])
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0] == board[i][1] &&
			board[i][1] == board[i][2] &&
			board[i][1] == '#')
		{
			return '#';
		}
		/*else if (board[i][0] == board[i][1] &&
			board[i][1] == board[i][2] &&
			board[i][1] == '*')
		{
			return '*';
		}*/
	}
	for (i = 0; i < COL; i++)
	{
		if (board[0][i] == board[1][i] &&
			board[1][i] == board[2][i] &&
			board[1][i] == '#')
		{
			return '#';
		}
		/*else if (board[0][i] == board[1][i] &&
			board[1][i] == board[2][i] &&
			board[1][i] == '*')
		{
			return '*';
		}*/
	}
     if (board[0][0] == board[1][1] &&
		board[1][1] == board[2][2] &&
		board[1][1] == '#')
	{
		return '#';
	}
	else if (board[0][2] == board[1][1] &&
		board[1][1] == board[2][0] &&
		board[1][1] == '#')
	{
		return '#';
	}
	for (i = 0; i < ROW; i++)
	{
		if (board[i][0] == board[i][1] &&
			board[i][1] == board[i][2] &&
			board[i][1] == '*')
		{
			return '*';
		}
	}
	for (i = 0; i < COL; i++)
	{
		if (board[0][i] == board[1][i] &&
			board[1][i] == board[2][i] &&
			board[1][i] == '*')
		{
			return '*';
		}
	}
	 if (board[0][0] == board[1][1] &&
		board[1][1] == board[2][2] &&
		board[1][1] == '*')
	{
		return '*';
	}
	else if (board[0][2] == board[1][1] &&
		board[1][1] == board[2][0] &&
		board[1][1] == '*')
	{
		return '*';
	}
	else if (Isfull(board) == 1)
	{
		return 'Q';
	}
	
	else
	{
		return ' ';
	}
}

void game()
{ 
	char ret = 0;
	char board[ROW][COL] = {0};
	//初始化棋盘
	InitBoard(board);
	Displayboard(board);
	while (1)//
	{
		PlayerMove(board);
		Displayboard(board);
		ret = Is_win(board);
		if (ret != ' ')//还有空格就不进if 返回# * Q时跳出while输出结果
		{
			break;
		}
		ComputerMove(board);
		Displayboard(board);
		ret = Is_win(board);
		if (ret != ' ')
		{
			break;
		}
	}
	//Is_win(board);
	
	if (ret == '#')
	{
		printf("player win\n");
	}
	if (ret == '*')
	{
		printf("computer win\n");
	}

	if (ret == 'Q')
	{
		printf("平局\n");
	}

}