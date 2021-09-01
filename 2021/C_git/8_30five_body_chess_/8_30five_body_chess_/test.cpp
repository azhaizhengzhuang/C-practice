#include"five_body_chess.h"
int  turn;
int aboard[20][20];
int main()
{

	InitBoard();
	PlayChess();
	
	closegraph();
	return 0;
}