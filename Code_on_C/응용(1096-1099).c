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
//		printf("����� ������ ���Դϴ�.");
//	else if (month >= 6 && month <= 8)
//		printf("����� ������ �����Դϴ�.");
//	else if (month >= 9 && month <= 11)
//		printf("����� ������ �����Դϴ�.");
//	else
//		printf("����� ������ �ܿ��Դϴ�.");
//
//	return 0; // 1096 �� ������ ������?
//}

//int main(void)
//{
//	int i, n, sum = 0;
//	
//	scanf("%d", &n);
//
//	if (n % 2 == 0) {
//		printf("�Է��� ���ڴ� ¦���Դϴ�.\n");
//		for (i = 0; i <= n; i += 2)
//			sum += i;
//		printf("¦���� ���� %d�Դϴ�.", sum);
//	}
//	else {
//		printf("�Է��� ���ڴ� Ȧ���Դϴ�.\n");
//		for (i = 1; i <= n; i += 2)
//			sum += i;
//		printf("Ȧ���� ���� %d�Դϴ�.", sum);
//	}
//
//	return 0; // 1097 Ȧ�� �Ǵ� ¦�� �� ���ϱ�
//}

//int main(void)
//{
//	int i, j, n, num = 1;
//
//	printf("���� �Ƕ�̵带 ������Դϴ�.\n");
//	printf("�� ���ΰ���?");
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
//	return 0; // 1098 ���� �Ƕ�̵� �����
//}

//int main(void)
//{
//	int a, b, c, d, e, f, result = 0;
//	int r1, r2, r3;
//
//	printf("ù ��° �������� ù ��° �Ÿ��� �������ּ���: ");
//	scanf("%d", &a);
//	printf("ù ��° �������� �� ��° �Ÿ��� �������ּ���: ");
//	scanf("%d", &b);
//	printf("�� ��° �������� ù ��° �Ÿ��� �������ּ���: ");
//	scanf("%d", &c);
//	printf("�� ��° �������� �� ��° �Ÿ��� �������ּ���: ");
//	scanf("%d", &d);
//	printf("�� ��° �������� ù ��° �Ÿ��� �������ּ���: ");
//	scanf("%d", &e);
//	printf("�� ��° �������� �� ��° �Ÿ��� �������ּ���: ");
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
//	printf("���� ª�� �Ÿ��� %d %d %d�Դϴ�.\n", r1, r2, r3);
//	printf("�Ÿ��� ���� %d�Դϴ�.", result);
//
//	return 0; // 1099 �������� �ִܰŸ� ã�ƺ���
//}