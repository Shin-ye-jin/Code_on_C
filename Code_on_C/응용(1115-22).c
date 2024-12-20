#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main(void)
//{
//	int n[30];
//	int cnt = 0, i;
//
//	for (i = 0; i < 30; i++) {
//		scanf("%d", &n[i]);
//		if (n[i] == 1) cnt++;
//	}
//
//	if (cnt > 15) {
//		printf("A조입니다.");
//	}
//	else {
//		printf("B조입니다.");
//	}
//	return 0; // 1115 체육대회 조 편성
//}

//int main(void)
//{
//	char name[20], blood[10], ho[20];
//	scanf("%s %s %s", &name, &blood, &ho); // 문자열은 배열로 해서 입력 받는다.
//	printf("저의 이름은 %s 이고, 저의 혈액형은 %s 형이며, 저의 취미는 %s입니다.", name, blood, ho);
//	return 0; // 1116 입학식 자기소개
//}

//int main(void)
//{
//	int a, b, n1, n2;
//	scanf("%d %d", &a, &b);
//
//	n1 = a & b;
//	n2 = a | b;
//
//	if (n1 > n2) printf("%d", n1);
//	else printf("%d", n2);
//
//	return 0; // 1118 비트 연산 프로그램
//}

//#include<string.h>
//
//int main(void)
//{
//	char f[20];
//	float re;
//	scanf("%s", f);
//	scanf("%f", &re);
//	if ((strcmp("망고", f) == 0 || strcmp("수박", f) == 0 || strcmp("사과", f) == 0)) { // 문자열 비교
//		printf("%.0f", re * 0.9);
//	}
//	else {
//		printf("할인 품목이 아닙니다.");
//	}
//	return 0; // 1119 얼마나 저렴할까?
//}

//int main(void)
//{
//	int n, sum = 0, i;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		if (i % 2 == 0) {
//			sum += i;
//			if (sum > n) {
//				printf("%d", i);
//				break;
//			}
//		}
//	}
//	return 0; // 1120 나보다 큰 수
//}

//int main(void)
//{
//	int n, i = 0, j;
//	int num[100];
//	scanf("%d", &n);
//
//	while (n > 0) {
//		num[i] = n % 5;
//		n = n / 5;
//		i++;
//	}
//	if (n > 0) {
//		num[i] = n;
//		for (j = i; j >= 0; j--) {
//			printf("%d", num[j]);
//		}
//	}
//	else {
//		for (j = i - 1; j >= 0; j--) {
//			printf("%d", num[j]);
//		}
//	}
//	return 0; // 1122 5진수 계산기
//}