#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
	int i,len;
	char ch[333334];
	
	scanf("%s", ch);
	len = strlen(ch);
	for (i = 0; i < len; i++) {
		if (i == 0) {
			switch (ch[i]) {
			case '0':printf("");
				break;
			case '1':printf("1");
				break;
			case '2':printf("10");
				break;
			case '3':printf("11");
				break;
			case '4':printf("100");
				break;
			case '5':printf("101");
				break;
			case '6':printf("110");
				break;
			case '7':printf("111");
				break;
			}
		}else {
			switch (ch[i]) {
			case '0':printf("000");
				break;
			case '1':printf("001");
				break;
			case '2':printf("010");
				break;
			case '3':printf("011");
				break;
			case '4':printf("100");
				break;
			case '5':printf("101");
				break;
			case '6':printf("110");
				break;
			case '7':printf("111");
				break;
			}
		}
	}
}