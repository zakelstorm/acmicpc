#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int Partition(int* Arr, int left, int right);
int QuickSort(int* arr, int left, int right,int key);
int ret = 0;
int main() {
	int N, K;
	int* arr;
	scanf("%d %d", &N, &K);
	arr = (int *)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	printf("%d", QuickSort(arr, 0, N - 1, K));
}

int Partition(int* arr, int left, int right) {
	int pivot = arr[left];
	int low = left + 1, high = right;
	int temp;
	while (low <= high) {
		while (arr[low] <= pivot && low <= right) low++;
		while (arr[high] >= pivot && high > left) high--;
		if (low < high) {
			temp = arr[low];
			arr[low] = arr[high];
			arr[high] = temp;
		}
	}
	temp = arr[left];
	arr[left] = arr[high];
	arr[high] = temp;
	return high;
}

int QuickSort(int* arr, int left, int right, int key) {
	int pivot = Partition(arr, left, right);
	if (pivot == key - 1) {
		return arr[pivot];
	}else if (pivot > key - 1) {
		if(left < right)
			return QuickSort(arr, left, pivot - 1,key);
	}else {
		if(left < right)
			return QuickSort(arr, pivot + 1, right, key);
	}
}