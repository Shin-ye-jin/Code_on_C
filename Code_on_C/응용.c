#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main(void)
//{
//	int n, i, sum = 0;
//	scanf("%d", &n);
//
//	for (i = 0; i <= n; i++) {
//		if (i % 2 == 0 || i % 5 == 0)
//			sum += i;
//	}
//
//	printf("2의 배수와 5의 배수의 합은 %d 입니다.", sum);
//	return 0; // 1104 2의 배수 또는 5의 배수의 합 구하기
//}

//int main(void)
//{
//	char n[100];
//	int count = 0;
//
//	while (1) {
//		scanf("%s", n);
//		if (strcmp(n, "1234") == 0) {
//			printf("열림\n");
//			break;
//		}
//		else {
//			printf("다시 입력하세요.\n");
//			count++;
//		}
//
//		if (count == 3)
//			break;
//	}
//	return 0; // 1105 도어락을 열어라
//}

//int main(void)
//{
//	int re = 10000;
//	int a = 2000, b = 1500, c = 1000;
//	int i, j, z, sum = 0;
//
//	for (i = 1; i <= 4; i++) {
//		for (j = 1; j <= 4; j++) {
//			for (z = 1; z <= 4; z++) {
//				if ((a * i + b * j + c * z) == re) {
//					printf("%d %d %d\n", i, j, z);
//				}
//			}
//		}
//	}
//	return 0; // 1106 빼빼로데이 고백 대작전
//}

//int f(int n) {
//	if (n == 1) return 1;
//	else {
//		return n * f(n - 1);
//	}
//}
//
//int main(void) {
//	int n;
//	scanf("%d", &n);
//	printf("%d", f(n));
//	return 0; // 1107 팩토리얼 계산
//}

//int main(void)
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a * a + b * b == c * c) {
//		printf("직각삼각형");
//	}
//	else {
//		printf("직각삼각형 아님");
//	}
//	return 0; // 1108 직각삼각형 판별기
//}

//int main(void)
//{
//	int n1, n2, n3, n4, sum = 0;
//	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
//
//	sum = n1 + n2 + n3 + n4;
//
//	if (sum == 0) printf("모");
//	else if (sum == 1)printf("도");
//	else if (sum == 2)printf("개");
//	else if (sum == 3)printf("걸");
//	else if (sum == 4)printf("윷");
//	return 0; // 1109 윷놀이
//}

//int main(void)
//{
//	char a;
//	int n;
//
//	scanf("%c", &a);
//	scanf("%d", &n);
//
//	if (a == 'T') {
//		printf("%d", 15 * n);
//	}
//	else {
//		printf("%d", 5 * n);
//	}
//	return 0; // 1110 베이킹 용량 계산하기
//}