#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int MuiTables(int n){
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d*%d=%d\t", j, i, j*i);
		}
		printf("\n");
}
}



int main() {
	int n = 0;
	printf("请输入你想要的输入的数:");
	scanf("%d", &n);
	MuiTables(n);
	system("pause");
	return 0;
}