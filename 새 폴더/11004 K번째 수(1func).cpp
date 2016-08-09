#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int QuickSort(int* arr, int left, int right, int key);

int main() {
	int N, K;
	int* arr;
	scanf("%d %d", &N, &K);
	arr = (int*)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	printf("%d\n",QuickSort(arr, 0, N - 1, K));
}

int QuickSort(int* arr, int left, int right, int key) {
	int pivot = left;
	int low = left + 1;
	int high = right;
	int temp;
	while (low <= high) {
		while (arr[low] <= arr[pivot] && low <= right) low++;
		while (arr[high] >= arr[pivot] && high >= left + 1) high--;
		if (low < high) {
			temp = arr[low];
			arr[low] = arr[high];
			arr[high] = temp;
		}
	}
	temp = arr[pivot];
	arr[pivot] = arr[high];
	arr[high] = temp;

	if (key - 1 == high) {
		return arr[high];
	}else if (high > key - 1) {
		return QuickSort(arr, left, high - 1, key);
	}else {
		return QuickSort(arr, high + 1, right, key);
	}
}