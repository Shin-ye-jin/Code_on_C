#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main(void)
//{
//	char n[10000];
//	int i=0;
//
//	scanf("%s", n);
//
//	while (n[i]!='\0') {
//		if (n[i] >= '0' && n[i] <= '9') {
//			i++;
//			continue;
//		}
//		else {
//			printf("%c", n[i]);
//			i++;
//		}
//	}
//
//	return 0; // 1100 문자는 되고 숫자는 안되요!
//}

int main(void)
{
	int year, month, day, result=0;
	
	printf("궁금한 연도를 입력하세요->");
	scanf("%d", &year);

	printf("궁금한 월을 입력하세요->");
	scanf("%d", &month);

	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		result = 1;
	}

	if (month == 2) {
		if (result == 1) day = 29;
		else day = 28;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		day = 30;
	}
	else {
		day = 31;
	}

	if(result==1) printf("%d은 윤년이고, %d월의 마지막날은 %d일입니다.", year, month, day);
	else printf("%d은 윤년이 아니고, %d월의 마지막날은 %d일입니다.", year, month, day);
	
	return 0; // 1101 매월의 마지막 날짜는 무엇일까?
}