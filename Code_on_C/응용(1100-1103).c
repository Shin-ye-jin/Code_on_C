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

//int main(void)
//{
//	int year, month, day, result=0;
//	
//	printf("궁금한 연도를 입력하세요->");
//	scanf("%d", &year);
//
//	printf("궁금한 월을 입력하세요->");
//	scanf("%d", &month);
//
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
//		result = 1;
//	}
//
//	if (month == 2) {
//		if (result == 1) day = 29;
//		else day = 28;
//	}
//	else if (month == 4 || month == 6 || month == 9 || month == 11) {
//		day = 30;
//	}
//	else {
//		day = 31;
//	}
//
//	if(result==1) printf("%d은 윤년이고, %d월의 마지막날은 %d일입니다.", year, month, day);
//	else printf("%d은 윤년이 아니고, %d월의 마지막날은 %d일입니다.", year, month, day);
//	
//	return 0; // 1101 매월의 마지막 날짜는 무엇일까?
//}

//int main(void)
//{
//	int money, tmp,result;
//	int n1 = 700, n2 = 1000, n3 = 1500, n4 = 1200;
//
//	printf("음료수를 선택해주세요\n");
//	printf("1:사이다(700원), 2:콜라(1000원), 3:이온음료(1500원), 4:환타(1200원)");
//	scanf("%d", &tmp);
//	printf("투입금액을 입력하세요: ");
//	scanf("%d", &money);
//
//	if (tmp == 1 && money >=n1) {
//		result = money - n1;
//		printf("거스름 돈은 %d원입니다.", result);
//	}
//	else if (tmp == 2 && money >= n2) {
//		result = money - n2;
//		printf("거스름 돈은 %d원입니다.", result);
//	}
//	else if (tmp == 3 && money >= n3) {
//		result = money - n3;
//		printf("거스름 돈은 %d원입니다.", result);
//	}
//	else if (tmp == 4 && money >= n4) {
//		result = money - n4;
//		printf("거스름 돈은 %d원입니다.", result);
//	}
//	else {
//		printf("선택이나 금액이 올바르지 않습니다.");
//	}
//	return 0; // 1102 음료수 자판기 구현하기
//}

//int main(void)
//{
//	int i, n;
//
//	printf("몇 단의 구구단을 출력할까요?");
//	scanf("%d", &n);
//
//	for (i = 2; i <= 9; i++) {
//		printf("%d X %d = %d\n", n, i, n * i);
//	}
//	return 0; // 1103 n단 구구단 구현하기
//}