#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>









#define ROWS ROW+2
#define COLS ROW+2
#define ROW 7
#define COL 7
#define MINE 5


void menu();
void init(char mine[ROWS][COLS], char show[ROW][COL]);
void mine_set(char[ROWS][COLS], int start_x, int start_y);
void print_mine(char mine[ROWS][COLS]);
void print_show(char mine[ROW][COL]);
void mini_print_mine(char mine[ROWS][COLS]);
void count_mine(char mine[ROWS][COLS], char show[ROW][COL], int x, int y);
int iswin(char mine[ROWS][COLS],char show[ROW][COL]);