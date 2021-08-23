//本程序进行一些循环结构的练习题操作

#include<stdio.h>
#include<string.h>

/*
//分数求和，打印出1/1-1/2+1/3-1/4+1/5+...+1/99-1/100的结果
int main()
{
	double num = 0;
	double sum = 0;//创建和的初始化
	int i = 0;//创建循环变量
	for (i = 1; i <= 100; i++)
	{
		num = 1.0 / i;//想要计算结果为小数，两个数至少有一个是浮点数
		if (i % 2 == 0)
			sum = sum - num;
		else
			sum = sum + num;
	}
	printf("计算所得结果为：%f.\n", sum);
	return 0;
}*/

/*
//输出乘法口诀表
int main()
{
	int i = 1;//创建起始值
	int mul = 1;
	int right = 1;//由1-9打印，每循环一行，右侧数字增大一
	for (right; right <= 9; right++) 
	{
		i = 1;
		while (i <= right) 
		{
			mul = i * right;
			printf("%d*%d=%-2d ", i, right, mul);
			i++;
		}
		printf("\n");
	}
	return 0;
}*/




