#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main() {
	int money = 0;
	printf("��������Ҫ���Ľ����Ϊ\n");
	scanf("%d", &money);
	int bottle = 0;
	bottle = (money - 1) * 2;
	printf("�����Ժ�%dƿ��ˮ",bottle);
	system("pause");
	return 0;
}