#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
//杨辉三角
	int row= 0;
	int col = 0;
	int n=5;
	/*printf("请输入您要求的行数：");
	scanf("%d ", &n);*/
	int arr[5][5] = { 0 };
	for (row = 0; row < n; row++) {
		for (col = 0; col < row; col++) {
			arr[row][0] = 0;
			for(row>=1&&col>=1){
				arr[row][col] = arr[row - 1][col - 1] + arr[row - 1][col];
			}
		}
	}
	for (row = 0; row < n; row++) {
		for (col = 0; col < row; col++) {
			printf("%d\n", arr[row][col]);
		}
	}
	system("pause");
	return 0;
}