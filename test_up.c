//�����������ϵ�ĸ��µ���
#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <string.h>


////����n�Ľ׳�
//int main()
//{
//	int n = 0;
//	int i = 1;
//	int ret = 1;
//	printf("����n�Ľ׳�,������n��");
//	scanf("%d", &n);
//	for (i; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d�Ľ׳�Ϊ��%d", n, i);
//	return 0;
//}

////����ǰn�����Ľ׳�֮��
//int main()
//{
//	int n = 0; //���ȴ���������n
//	int i = 0;
//	int ret = 1;//��ʼ���׳�
//	int sum = 0;//��ʼ���׳�֮��
//	printf("����ǰn�����Ľ׳�֮�ͣ�������n��");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	if (i > n)
//		printf("���ý��Ϊ��%d", sum);
//
//	return 0;
//}

////��һ��nά���������в�������Ҫ������x�����������±�
////���Ƚ���һ���Զ�������ά����ĺ���
//int multidi(int n,int v[])
//{
//	int i = 0;
//	for (i; i < n; i++)
//		v[i] = i;
//	return v[i-1];
//}
//
////�������������ѭ������x
//int search(int x,int v[])
//{
//
//}
//
//int main()
//{
//	int v[] = { 0 };
//	int n = 0;
//	int sz = sizeof(v) / sizeof(v[0]);
//	printf("����nά�������飬������n:");
//	scanf("%d", &n);
//	multidi(n, v);
//	
//	return 0;
//}

/*
//��һ�������е����ֽ��дӴ�С����
int main()
{
	int arr[] = { 0,50,3,12,4,89,52,20 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int m = 0;//����һ����������ÿ���жϵ����ֵ
	int ms = 0;//����һ����������ÿ���жϵ����ֵ�������еĵ�ַ
	int i = 0;
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		i = left;
		m = arr[left];
		for (i; i <=right; i++)
		{
			
			if (m < arr[i])
			{
				m = arr[i];
				ms = i;//�����滻�������е�λ��
			}
		}
		arr[ms] = arr[left];//������ķŵ������ֵλ��
		arr[left] = m;//�����ֵ��������
		left++;
	}
	if (left == right)
	{
		for (i = 0; i < sz; i++)
			printf("%d ", arr[i]);
	}
}*/


//����û�����������ڵ������ܱ�3��������ֵ
int main()
{
	int num = 0;
	int time = 3;
	int bin = 0;
	int out = 0;
	printf("���������֣�������������������ܱ�3������ֵ��");
	scanf("%d", &num);
	do
	{
		out = bin * 3;
		printf("%d ", out);
		bin++;
	} while (out<=num-3);
	
	return 0;
}