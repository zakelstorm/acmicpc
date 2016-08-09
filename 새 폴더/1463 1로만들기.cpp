#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,N,min,j;
	int* arr;
	int result[3];
	scanf("%d", &N);
	arr = (int*)malloc(sizeof(int) * (N + 1));
	arr[1] = 0;
	arr[2] = 1;
	arr[3] = 1;
	for (i = 4; i <= N; i++) {
		result[0] = 9999999;
		result[1] = 9999999;
		result[2] = 9999999;
		if (i % 3 == 0) {
			result[2] = arr[i / 3]+1;
		}
		if (i % 2 == 0) {
			result[1] = arr[i / 2]+1;
		}
		result[0] = arr[i - 1]+1;
		min = result[0];
		for (j = 0; j < 3; j++) {
			if (min > result[j]) {
				min = result[j];
			}
		}
		arr[i] = min;
	}
	printf("%d", arr[N]);
}