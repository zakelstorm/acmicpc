#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int M, D;
	int day = 0;
	scanf("%d %d", &D, &M);
	switch (M) {
	case 1:day += 0 + D-1;
		break;
	case 2:day += 31 + D-1;
		break;
	case 3:day += 31 + 28 + D-1;
		break;
	case 4:day += 31 + 28 + 31 + D-1;
		break;
	case 5:day += 31 + 28 + 31+30+D-1;
		break;
	case 6:day += 31 + 28 + 31 + 30+31+D-1;
		break;
	case 7:day += 31 + 28 + 31 + 30 + 31+30+D-1;
		break;
	case 8:day += 31 + 28 + 31 + 30 + 31 + 30+31+D-1;
		break;
	case 9:day += 31 + 28 + 31 + 30 + 31 + 30 + 31+31+D-1;
		break;
	case 10:day += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 +30+D-1;
		break;
	case 11:day += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30+31+D-1;
		break;
	case 12:day += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31+30+D-1;
		break;
	}
	switch (day%7)
	{
	case 0: printf("Thursday"); break;
	case 1:printf("Friday"); break;
	case 2:printf("Saturday"); break;
	case 3:printf("Sunday"); break;
	case 4:printf("Monday"); break;
	case 5:printf("Tuesday"); break;
	case 6:printf("Wednesday"); break;
	}
	return 0;
}