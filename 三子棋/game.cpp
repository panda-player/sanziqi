#define _CRT_SECURE_NO_WARNINGS
#include"三子棋.h"

void chushihua(char arr1[ROW][COL], int row, int col)
{
	int a = 0;
	int b = 0;
	for (a = 0;a < row; a++)
	{
		for (b = 0; b < col; b++)//在轮换一次后，b又变成0了

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
	printf("玩家走，输入坐标\n");

	int a = 0;
	int b = 0;
	while (1)
	{
		scanf("%d %d", &a, &b);
		if (a > 3 || b > 3||a<1||b<1)
		{
			printf("你不买瓜，就是来找茬的是吧\n");
			printf("玩家走，输入坐标\n");
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
				printf("不能悔棋,重新下\n");
				printf("玩家走，输入坐标\n");
			}
		}
	}


}
void computer_move(char arr1[ROW][COL], int row, int col)
{
	printf("电脑走\n");

	//int a = rand() % 3;//要放到里面来，放外面的话，如果下过来，a，b值会一直不变，陷入死循环
	//int b = rand() % 3;
	while (1)
	{
		int a = rand() % 3;//要放到里面来，放外面的话，如果下过来，a，b值会一直不变，陷入死循环
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
		}//连等判断不了，只能一个一个判断

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
				c++;//这里如果写int c=1，循环结束后，会变为0，为什么
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
//		printf("玩家胜利\n");
//		break;
//	}
//}
//
////判断三列
//for (i = 0; i < col; i++)
//{
//	if (arr1[0][i] == arr1[1][i] && arr1[1][i] == arr1[2][i] && arr1[1][i] != '*')
//	{
//		printf("玩家胜利\n");
//		break;
//	}
//}
//
////判断对角线
//if (arr1[0][0] == arr1[1][1] && arr1[1][1] == arr1[2][2] && arr1[1][1] != '*')
//{
//	printf("玩家胜利\n");
//	break;
//
//}
//if (arr1[0][2] == arr1[1][1] && arr1[1][1] == arr1[2][0] && arr1[1][1] != '*')
//{
//	printf("玩家胜利\n");
//	break;
//}