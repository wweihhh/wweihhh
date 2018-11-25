#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
int check()
{
	union
	{
		int i;
		char c;
	}un;
	un.i = 1;
	return un.c;
}
int main()
{
	int ret = 0;
	ret=check();
	if (ret == 1)
	{
		printf("小端\n");
	}
	if (ret == 0)
	{
		printf("大端\n");
	}
	system("pause");
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
int check()
{
	int i = 1;
	return (*(char*)&i);
}
int main()
{
	int ret = 0;
	ret=check();
	if (ret == 1)
	{
		printf("小端\n");
	}
	if (ret == 0)
	{
		printf("大端\n");
	}
	system("pause");
	return 0;
}