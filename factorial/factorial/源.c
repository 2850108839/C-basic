#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//递归
int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

int main() {
	int n = 0;
	printf("请输入你想要算的阶乘数");
	scanf("%d", &n);
	printf("%d", factorial(n));
	system("pause");
	return 0;
}



//非递归
//int main() {
//	int n = 0;
//    int result = 1;
//	printf("请输入你想要算的阶乘数");
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		result = result * i;
//	}
//	printf("%d", result);
//	system("pause");
//	return 0;
//}