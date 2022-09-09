#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include"三子棋.h"

void medu()
{
	printf("*******************************\n");
	printf("********   1.开始游戏  ********\n");
	printf("********   2.退出游戏  ********\n");
	printf("*******************************\n");

}
void game()
{
	int rejet2 = 0;
	int ret = 0;
	char arr1[ROW][COL] ;
	chushihua(arr1,ROW,COL);
	print(arr1, ROW, COL);
	while(1)
	{
		player_move(arr1, ROW, COL);
		print(arr1, ROW, COL);
		is_win(arr1, ROW, COL);
		ret = is_win(arr1, ROW, COL);
		if (ret == 1)
		{
			printf("玩家胜利\n");
			break;
		}
		is_full(arr1, ROW, COL);
		rejet2= is_full(arr1, ROW, COL);
		if (rejet2 == 1)
		{
			printf("平局\n");
			break;
		}

		computer_move(arr1, ROW, COL);
		print(arr1, ROW, COL);
		is_win(arr1, ROW, COL);
		ret = is_win(arr1, ROW, COL);
		if (ret == 2)
		{
			printf("电脑胜利\n");
			break;
		}
		is_full(arr1, ROW, COL);
		rejet2 = is_full(arr1, ROW, COL);
		if (rejet2 == 1)
		{
			printf("平局\n");
			break;
		}
		
		
	}
	


}
int main()
{
	srand((unsigned int)time(NULL));
	int a = 0;
	do
	{
		medu();
		printf("请选择");
		scanf("%d",&a);
		switch(a)
		{
		case 1:
		game();
		case 2:
			break;
		default:
			printf("选的什么啊");
				break;



		}


	} while (a-1);



	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
