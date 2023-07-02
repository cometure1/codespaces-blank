#define   _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);
	Printboard(board, ROW, COL);
	while (1)
	{
		//�����
		PlayerMove(board, ROW, COL);
		//��ӡ����
		Printboard(board, ROW, COL);
		//�ж�����
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//������
		ComputerMove(board, ROW, COL);
		//��ӡ����
		Printboard(board, ROW, COL);
		//�ж�����
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret = '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret = '#')
	{
		printf("����Ӯ\n");
	}
	else if (ret = 'Q')
	{
		printf("ƽ��\n");
	}
}
void menu()
{
	printf("********************\n");
	printf("**1.play    0.exit**\n");
	printf("********************\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("�Ƿ������Ϸ(1/0)>:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	}
		while (input);
	return 0;
}

