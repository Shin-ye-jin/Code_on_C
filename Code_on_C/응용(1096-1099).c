#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main(void)
//{
//	int year, month, day, birth;
//
//	scanf("%d", &birth);
//
//	day = birth % 100;
//	month = (birth / 100) % 100;
//	year = month / 100;
//
//	if (month >= 3 && month <= 5)
//		printf("당신의 생일은 봄입니다.");
//	else if (month >= 6 && month <= 8)
//		printf("당신의 생일은 여름입니다.");
//	else if (month >= 9 && month <= 11)
//		printf("당신의 생일은 가을입니다.");
//	else
//		printf("당신의 생일은 겨울입니다.");
//
//	return 0; // 1096 내 생일의 계절은?
//}

//int main(void)
//{
//	int i, n, sum = 0;
//	
//	scanf("%d", &n);
//
//	if (n % 2 == 0) {
//		printf("입력한 숫자는 짝수입니다.\n");
//		for (i = 0; i <= n; i += 2)
//			sum += i;
//		printf("짝수의 합은 %d입니다.", sum);
//	}
//	else {
//		printf("입력한 숫자는 홀수입니다.\n");
//		for (i = 1; i <= n; i += 2)
//			sum += i;
//		printf("홀수의 합은 %d입니다.", sum);
//	}
//
//	return 0; // 1097 홀수 또는 짝수 합 구하기
//}

//int main(void)
//{
//	int i, j, n, num = 1;
//
//	printf("숫자 피라미드를 만들것입니다.\n");
//	printf("몇 단인가요?");
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		for (j = n; j > i; j--) {
//			printf(" ");
//		}
//		for (j = 1; j < i*2; j++) {
//			printf("%d", num);
//		}
//		num++;
//		printf("\n");
//	}
//	return 0; // 1098 숫자 피라미드 만들기
//}

//int main(void)
//{
//	int a, b, c, d, e, f, result = 0;
//	int r1, r2, r3;
//
//	printf("첫 번째 갈림길의 첫 번째 거리를 설정해주세요: ");
//	scanf("%d", &a);
//	printf("첫 번째 갈림길의 두 번째 거리를 설정해주세요: ");
//	scanf("%d", &b);
//	printf("두 번째 갈림길의 첫 번째 거리를 설정해주세요: ");
//	scanf("%d", &c);
//	printf("두 번째 갈림길의 두 번째 거리를 설정해주세요: ");
//	scanf("%d", &d);
//	printf("세 번째 갈림길의 첫 번째 거리를 설정해주세요: ");
//	scanf("%d", &e);
//	printf("세 번째 갈림길의 두 번째 거리를 설정해주세요: ");
//	scanf("%d", &f);
//
//	if (a < b){
//		result += a; r1 = a;
//	}	
//	else {
//		result += b; r1 = b;
//	}
//		
//
//	if (c < d) {
//		result += c; r2 = c;
//	}
//	else {
//		result += d; r2 = d;
//	}
//		
//
//	if (e < f) {
//		result += e; r3 = e;
//	}
//	else {
//		result += f; r3 = f;
//	}
//	
//	printf("가장 짧은 거리는 %d %d %d입니다.\n", r1, r2, r3);
//	printf("거리의 합은 %d입니다.", result);
//
//	return 0; // 1099 갈림길의 최단거리 찾아보기
//}