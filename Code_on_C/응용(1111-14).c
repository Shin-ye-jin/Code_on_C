#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main(void)
//{
//	int time, h, m;
//	scanf("%d", &time);
//
//	h = time / 60;
//	m = time % 60;
//	
//	printf("%d시간 %d분", h, m);
//	return 0; // 1111 시간 변환하기
//}

//int main(void)
//{
//	int he, max = 100, i;
//
//	for (i = 0; i < 5; i++) {
//		scanf("%d", &he);
//		if (max < he) {
//			max = he;
//		}
//	}
//
//	printf("%d", max);
//	return 0; // 1112 우리 반에서 키가 가장 큰 학생은?
//}


//int main(void)
//{
//	int length, i;
//	char str[50];
//	char* strN;
//	printf("변환 시킬 숫자를 입력하세요 : ");
//	scanf("%s", str);
//	length = strlen(str);
//	strN = str;
//	printf("변환 결과 : ");
//	
//	for (i = length; i > 0;) {
//		printf("%c", *strN++);
//		i--;
//		if (i > 0 && (i % 3) == 0) {
//			printf(",");
//		}
//	}
//
//	return 0; // 1113 금액 입력 시 천 단위 콤마 찍기 !!
//}
#include<string.h>
//int main(void)
//{
//	int length, i;
//	char str[50];
//	scanf("%s", str);
//	length = strlen(str);
//
//	for (i = 0; i < length / 2; i++) {
//		if (str[i] == str[length - i - 1]) {
//			if (i == (length / 2 - 1)) {
//				printf("회문임!");
//			}
//		}
//		else {
//			printf("회문이 아님!");
//			break;
//		}
//	}
//	return 0; // 1114 기러기 토마토 스위스 인도인 별똥별 우영우, 회문!
//}