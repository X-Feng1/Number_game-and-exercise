//������Ϊ���ֲ�����Ϸ
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void game()
{
	//����1-50�����
	int randn = 0;
	int guass = 0;
	int t = 0;
	randn = rand() % 50 + 1;
	printf("��������Ϸ����һ����5�λ��ᣡ\n");
	//������
	while (1)
	{
		t++;
		printf("��%d�λ��ᣬ������֣�",t);
		scanf("%d", &guass);

		if (guass < randn)
		{
			printf("���С�ˣ�\n");
		}
		else if (guass > randn)
		{
			printf("��´��ˣ�\n");
		}
		else
		{
			printf("��ϲ��¶��ˣ�\n");
			break;
		}
		if (t >=5)
			break;
	}
}

int main()
{
	int num = 0;
	srand((unsigned)time(NULL));//����ʱ����������������
	//������Ϸ
	do
	{
		printf(">>>>>>>>>>>>>>>>>>>>>>>>\n");
		printf(">>>>>>>��Ϸ��ʼ��>>>>>>>\n");
		printf(">>>1. Play   0.Exit  >>>\n");
		printf("��ѡ��");
		scanf("%d", &num);
		switch (num)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (num);

	return 0;
}