#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main() {
	int tmp[4] = { 0 };

	int i=0;
	for (i = 0; i < 4; i++)
	{
		tmp[i] = 1;
		/*�ĸ�������������*/
		if ((tmp[0] != 1) + (tmp[2] == 1) +
			(tmp[3] == 1) + (tmp[3] != 1) == 3)
		{
			?? ??? ??? ?/*A��tem[0],A��i������*/
			printf("%c������", 'A' + i);
		}
		tmp[i] = 0;
	}
	system("pause");
	return 0;
}