#ifndef _GAME_H
#define _GAME_H

#define ROW 3
#define COL 3

void menu();
void game();

void InitBoard(char board[ROW][COL]);
void Displayboard(char board[ROW][COL]);
void PlayerMove(char board[ROW][COL]);
void ComputerMove(char board[ROW][COL]);
int Isfull(char board[ROW][COL]);
char Is_win(char board[ROW][COL]);



#endif _GAME_H_
