//������
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
 
	test();//����test���Ժ���
 
	return 0;
}


void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��>");
		scanf("%d",&input);
		switch (input) {
 
		case 1:
			game();
			break;		
		case 0:
			printf("�˳���Ϸ\n");
			break;		
		default:
			printf("ѡ�����\n");
			break;
	}
	} while (input);
}

//��������3*3 
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

//������� 
void player_move(char board[ROW][COL], int row, int col)
 {

	printf("������壺>");
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
				printf("�������ѱ�ռ�ã����������룡\n");
			}
		}
		else {
			printf("���겻����,���������룡\n");
		}
	}
}

//�������� 
void computer_move(char board[ROW][COL], int row, int col) 
{
	int x = 0;
	int y = 0;
	printf("��������:>\n");
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
	// ����
	for (i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	// ����
	for (i = 0; i < col; i++) {
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}
	//�Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ') {
		return board[1][1];

	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//�ж�ƽ��
	if (1 == is_full(board, row, col)) {
		return 'Q';
	}
	//����
	return 'C';
}
}
