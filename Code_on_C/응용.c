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
//	printf("2�� ����� 5�� ����� ���� %d �Դϴ�.", sum);
//	return 0; // 1104 2�� ��� �Ǵ� 5�� ����� �� ���ϱ�
//}

//int main(void)
//{
//	char n[100];
//	int count = 0;
//
//	while (1) {
//		scanf("%s", n);
//		if (strcmp(n, "1234") == 0) {
//			printf("����\n");
//			break;
//		}
//		else {
//			printf("�ٽ� �Է��ϼ���.\n");
//			count++;
//		}
//
//		if (count == 3)
//			break;
//	}
//	return 0; // 1105 ������� �����
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
//	return 0; // 1106 �����ε��� ��� ������
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
//	return 0; // 1107 ���丮�� ���
//}

//int main(void)
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a * a + b * b == c * c) {
//		printf("�����ﰢ��");
//	}
//	else {
//		printf("�����ﰢ�� �ƴ�");
//	}
//	return 0; // 1108 �����ﰢ�� �Ǻ���
//}

//int main(void)
//{
//	int n1, n2, n3, n4, sum = 0;
//	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
//
//	sum = n1 + n2 + n3 + n4;
//
//	if (sum == 0) printf("��");
//	else if (sum == 1)printf("��");
//	else if (sum == 2)printf("��");
//	else if (sum == 3)printf("��");
//	else if (sum == 4)printf("��");
//	return 0; // 1109 ������
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
//	return 0; // 1110 ����ŷ �뷮 ����ϱ�
//}