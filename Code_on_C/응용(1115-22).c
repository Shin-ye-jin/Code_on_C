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
//		printf("A���Դϴ�.");
//	}
//	else {
//		printf("B���Դϴ�.");
//	}
//	return 0; // 1115 ü����ȸ �� ��
//}

//int main(void)
//{
//	char name[20], blood[10], ho[20];
//	scanf("%s %s %s", &name, &blood, &ho); // ���ڿ��� �迭�� �ؼ� �Է� �޴´�.
//	printf("���� �̸��� %s �̰�, ���� �������� %s ���̸�, ���� ��̴� %s�Դϴ�.", name, blood, ho);
//	return 0; // 1116 ���н� �ڱ�Ұ�
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
//	return 0; // 1118 ��Ʈ ���� ���α׷�
//}

//#include<string.h>
//
//int main(void)
//{
//	char f[20];
//	float re;
//	scanf("%s", f);
//	scanf("%f", &re);
//	if ((strcmp("����", f) == 0 || strcmp("����", f) == 0 || strcmp("���", f) == 0)) { // ���ڿ� ��
//		printf("%.0f", re * 0.9);
//	}
//	else {
//		printf("���� ǰ���� �ƴմϴ�.");
//	}
//	return 0; // 1119 �󸶳� �����ұ�?
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
//	return 0; // 1120 ������ ū ��
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
//	return 0; // 1122 5���� ����
//}