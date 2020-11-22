#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int PowerFunction(int n,int k){
int sum = 0;
if (k == 0) {
	return 1;
}
else {
	return n * PowerFunction(n, k - 1);
}
}



int main() {
	int n = 0;
	int k = 0;
	printf("«Î“¿¥Œ ‰»În∫Õk\n");
	scanf("%d%d", &n, &k);
	int result = PowerFunction(n, k);
	printf("%d", result);
	system("pause");
	return 0;
}