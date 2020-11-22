#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Different_Bin(int num1, int num2)
{
	int i;
	int count = 0;
	num1 ^= num2;
	for (i = 0; i < 32; i++)
	{
		if ((num1 >> i) & 1 == 1)
		{
			count++;
		}
	}
	return count;
}

int main() {
	int num1 = 0;
	int num2 = 0;
	printf("请输入两个数num1,num2\n");
	scanf("%d %d", &num1, &num2);
	printf("%d", Different_Bin(num1, num2));
	system("pause");
	return 0;
}