#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//�ݹ�
//int Fib(int n){
//	if (n <= 2) {
//		return 1;
//	}
//	else {
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}

int Fib(int n) {
	int result1= 0;
	int result2 = 0;
	int result3 = 0;
	result1 = result2 = 1;
		while (n > 2) {
			n -= 1;
			result3 = result2;
			result2 = result1;
			result1 = result2 + result3;
}
		return result1;
}

int main() {
	int n = 0;
	printf("��������������ǵڼ����Შ������\n");
	scanf("%d", &n);
	int result = Fib(n);
	printf("���Ϊ%d", result);
	system("pause");
	return 0;
}