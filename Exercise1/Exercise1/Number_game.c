//本程序为数字猜谜游戏
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void game()
{
	//生成1-50随机数
	int randn = 0;
	int guass = 0;
	int t = 0;
	randn = rand() % 50 + 1;
	printf("猜数字游戏，您一共有5次机会！\n");
	//猜数字
	while (1)
	{
		t++;
		printf("第%d次机会，请猜数字：",t);
		scanf("%d", &guass);

		if (guass < randn)
		{
			printf("你猜小了！\n");
		}
		else if (guass > randn)
		{
			printf("你猜大了！\n");
		}
		else
		{
			printf("恭喜你猜对了！\n");
			break;
		}
		if (t >=5)
			break;
	}
}

int main()
{
	int num = 0;
	srand((unsigned)time(NULL));//利用时间戳产生随机的种子
	//进入游戏
	do
	{
		printf(">>>>>>>>>>>>>>>>>>>>>>>>\n");
		printf(">>>>>>>游戏开始！>>>>>>>\n");
		printf(">>>1. Play   0.Exit  >>>\n");
		printf("请选择：");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (num);

	return 0;
}