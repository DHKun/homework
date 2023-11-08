//三字棋
#include <stdio.h>
int main()
{

void menu()
 {

	printf("******************************\n");
	printf("*****   1. play       ********\n");
	printf("*****   0. exit       ********\n");
	printf("******************************\n");


}
int main() {
 
	test();//调用test测试函数
 
	return 0;
}


void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch (input) {
 
		case 1:
			game();
			break;		
		case 0:
			printf("退出游戏\n");
			break;		
		default:
			printf("选择错误\n");
			break;
	}
	} while (input);
}

//定义棋盘3*3 
#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
	for (j = 0; j < col; j++) 
	{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col) 
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) 
	{
		for (j = 0; j < col; j++) 
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		
		if (i < row - 1) 
		{
			for (j = 0; j < col; j++)
			 {
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

//玩家下棋 
void player_move(char board[ROW][COL], int row, int col)
 {

	printf("玩家下棋：>");
	int x = 0;
	int y = 0;
	while (1)
	 {
		scanf_s("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) 
		{
			if (board[x - 1][y - 1] == ' ') 
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("该坐标已被占用，请重新输入！\n");
			}
		}
		else {
			printf("坐标不合适,请重新输入！\n");
		}
	}
}

//电脑下棋 
void computer_move(char board[ROW][COL], int row, int col) 
{
	int x = 0;
	int y = 0;
	printf("电脑下棋:>\n");
	while (1)
	 {
		x = rand() % ROW; 
		y = rand() % COL; 
		if (board[x][y] == ' ')
		 {
			board[x][y] = '#';
			break;
		}
	}
}
int is_full(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}

char is_win(char board[ROW][COL], int row, int col) {
	int i = 0;
	// 三行
	for (i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	// 三列
	for (i = 0; i < col; i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') {
		return board[1][1];

	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断平局
	if (1 == is_full(board, row, col)) {
		return 'Q';
	}
	//继续
	return 'C';
}
}
