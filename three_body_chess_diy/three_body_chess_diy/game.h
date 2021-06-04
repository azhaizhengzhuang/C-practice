#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define row  3
#define col  3







void menu();
void three_body_chess();
void Init_board(char board[row][col]);
void print_board(char board[row][col]);
void playermove(char board[row][col]);
void computer1move(char board[row][col]);
void computer2move(char board[row][col]);
void computer3move(char board[row][col]);
void computer4move(char board[row][col]);
char iswin(char board[row][col]);
int isfull(char board[row][col]);
void difficulty();
void Jamesmove(char board[row][col]);