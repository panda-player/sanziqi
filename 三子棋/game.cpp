#define _CRT_SECURE_NO_WARNINGS
#include"������.h"

void chushihua(char arr1[ROW][COL], int row, int col)
{
	int a = 0;
	int b = 0;
	for (a = 0;a < row; a++)
	{
		for (b = 0; b < col; b++)//���ֻ�һ�κ�b�ֱ��0��

		{
			arr1[a][b] = ' ';
		}
	}
	

}
void print(char arr1[ROW][COL], int row, int col)
{
	int a = 0;
	int b = 0;

	for (a = 0; a < row; a++)
	{
		for (b = 0; b < col; b++)
		{
			if (b < col - 1)
				printf(" %c |", arr1[a][b]);
			else
				printf(" %c ", arr1[a][b]);

		}
		printf("\n");
		printf("___|___|___");
		printf("\n");
	}
}
void player_move(char arr1[ROW][COL], int row, int col)
{
	printf("����ߣ���������\n");

	int a = 0;
	int b = 0;
	while (1)
	{
		scanf("%d %d", &a, &b);
		if (a > 3 || b > 3||a<1||b<1)
		{
			printf("�㲻��ϣ��������Ҳ���ǰ�\n");
			printf("����ߣ���������\n");
		}
		else
		{
			if (arr1[a-1][b-1] == ' ')
			{
			 arr1[a-1][b-1] = '*';

			    break;
		    }
			else
			{
				printf("���ܻ���,������\n");
				printf("����ߣ���������\n");
			}
		}
	}


}
void computer_move(char arr1[ROW][COL], int row, int col)
{
	printf("������\n");

	//int a = rand() % 3;//Ҫ�ŵ���������������Ļ�������¹�����a��bֵ��һֱ���䣬������ѭ��
	//int b = rand() % 3;
	while (1)
	{
		int a = rand() % 3;//Ҫ�ŵ���������������Ļ�������¹�����a��bֵ��һֱ���䣬������ѭ��
		int b = rand() % 3;
		
			if (arr1[a ][b ] == ' ')
			{
				arr1[a ][b ] = '#';

				break;
			}
			
		
	}

}
int is_win(char arr1[ROW][COL], int row, int col)
{
	int ret = 0;
	int i = 0;
	while (1)
	{
		if ((arr1[0][0] == arr1[0][1]&&arr1[0][1] == arr1[0][2] && arr1[0][2] == '*') || (arr1[1][0] == arr1[1][1]&& arr1[1][1] == arr1[1][2]&&arr1[1][2] == '*' )|| (arr1[2][0] == arr1[2][1]&& arr1[2][1] == arr1[2][2]&&arr1[2][2] == '*') ||(arr1[0][0] == arr1[1][0]&& arr1[1][0] == arr1[2][0]&& arr1[2][0] == '*') || (arr1[0][1] == arr1[1][1]&& arr1[1][1] == arr1[2][1]&&arr1[2][1] == '*') ||( arr1[0][2] == arr1[1][2] && arr1[1][2] == arr1[2][2]&& arr1[2][2] == '*' )||(arr1[0][0] == arr1[1][1]&& arr1[1][1] == arr1[2][2]&&arr1[2][2] == '*' )|| (arr1[0][2] == arr1[1][1]&&arr1[1][1] == arr1[2][0]&&arr1[2][0] == '*') )
		{
			return 1;
			break;

		}
		else if (arr1[0][0] == arr1[0][1]&&arr1[0][1] == arr1[0][2]&& arr1[0][2] == '#' || arr1[1][0] == arr1[1][1]&&  arr1[1][1] == arr1[1][2]&& arr1[1][2] == '#' || arr1[2][0] == arr1[2][1] &&arr1[2][1] == arr1[2][2] && arr1[2][2] == '#' ||arr1[0][0] == arr1[1][0]&&  arr1[1][0] == arr1[2][0]&&arr1[2][0] == '#' || arr1[0][1] == arr1[1][1] && arr1[1][1] == arr1[2][1]&&  arr1[2][1] == '#' || arr1[0][2] == arr1[1][2] && arr1[1][2] == arr1[2][2]&&arr1[2][2] == '#' ||arr1[0][0] == arr1[1][1]&&arr1[1][1] == arr1[2][2]&&  arr1[2][2] == '#' || arr1[0][2] == arr1[1][1]&&arr1[1][1] == arr1[2][0]&& arr1[2][0] == '#')
		{
			return 2;
			break;
		}//�����жϲ��ˣ�ֻ��һ��һ���ж�

		return 3;
		break;
	
    }
}
int is_full(char arr1[ROW][COL], int row,int col)
{
	int a = 0;
	int b = 0;
	int c = 0;
	for (a = 0; a < row; a++)
	{
		for (b = 0; b < col; b++)
		{
			if (arr1[a][b] == ' ')
			{
				c++;//�������дint c=1��ѭ�������󣬻��Ϊ0��Ϊʲô
			}
			

		}


	}
	if (c==0)
	{
		
		return 1;
	}

}



//for (i = 0; i < row; i++)
//{
//	if (arr1[i][0] == arr1[i][1] && arr1[i][1] == arr1[i][2] && arr1[i][1] != '*')
//	{
//		printf("���ʤ��\n");
//		break;
//	}
//}
//
////�ж�����
//for (i = 0; i < col; i++)
//{
//	if (arr1[0][i] == arr1[1][i] && arr1[1][i] == arr1[2][i] && arr1[1][i] != '*')
//	{
//		printf("���ʤ��\n");
//		break;
//	}
//}
//
////�ж϶Խ���
//if (arr1[0][0] == arr1[1][1] && arr1[1][1] == arr1[2][2] && arr1[1][1] != '*')
//{
//	printf("���ʤ��\n");
//	break;
//
//}
//if (arr1[0][2] == arr1[1][1] && arr1[1][1] == arr1[2][0] && arr1[1][1] != '*')
//{
//	printf("���ʤ��\n");
//	break;
//}