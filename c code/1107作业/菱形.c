#define _CRT_SECURE_NO_WARNINGS 1


//��ӡ����
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int line = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	printf("��������Ҫ��ӡ��������");
	scanf("%d", &line);
	for (i = 0; i < line; i++)//i<line����������Ϊline
	{
		for (j = 0; j < line-1 - i; j++)//j<ine-1-i
		{
			printf(" ");
		}
		for (k = 0; k < (2 * i + 1); k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line-1;i++)//i<line-1������������Ϊline-1
	{
		for (j = 0; j < i + 1; j++)
		{
			printf(" ");
		}
		for (k = 0; k < (2 * (line-1 - i) - 1); k++)//2*(line-1-i)-1
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}




//ˮ�ɻ���
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	for (n = 100; n <= 999; n++)
	{
		i = n / 100;
		j = n / 10 % 10;//��Ҫȡ�������ȷŵ���λ �ٽ��� % ����
		k = n % 10;
		if (n == (i*i*i + j*j*j + k*k*k))
		{
			printf("%d ", n);
		}
	}
	system("pause");
	return 0;
}




#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void print()
{
	int i = 0;
	double sum = 0;
	int temp = 1;
	for (i = 100; i <= 999; i++)
	{
		while (temp > 0)
		{
			sum += pow(i % 10, 3);
			temp /= 10;
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
}
int main()
{
	print();
	system("pause");
	return 0;
}


//a+aa+aaa+aaaa+aaaa�ĺ�
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int j = 0;
	int i = 0;
	int n = 0;
	double s = 0;
	double sn = 0;
	scanf("%d", &n);
	if (n >= 0 && n < 10)
	{
		for (j = 0; j < 5; j++)
		{
			for (i = 0; i <= j; i++)
			{
				s = n*pow(10, i);
				sn = sn + s;
			}
		}
	}
	printf("%lf ", sn);
	system("pause");
	return 0;
}
