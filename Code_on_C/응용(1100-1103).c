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
//	return 0; // 1100 ���ڴ� �ǰ� ���ڴ� �ȵǿ�!
//}

//int main(void)
//{
//	int year, month, day, result=0;
//	
//	printf("�ñ��� ������ �Է��ϼ���->");
//	scanf("%d", &year);
//
//	printf("�ñ��� ���� �Է��ϼ���->");
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
//	if(result==1) printf("%d�� �����̰�, %d���� ���������� %d���Դϴ�.", year, month, day);
//	else printf("%d�� ������ �ƴϰ�, %d���� ���������� %d���Դϴ�.", year, month, day);
//	
//	return 0; // 1101 �ſ��� ������ ��¥�� �����ϱ�?
//}

//int main(void)
//{
//	int money, tmp,result;
//	int n1 = 700, n2 = 1000, n3 = 1500, n4 = 1200;
//
//	printf("������� �������ּ���\n");
//	printf("1:���̴�(700��), 2:�ݶ�(1000��), 3:�̿�����(1500��), 4:ȯŸ(1200��)");
//	scanf("%d", &tmp);
//	printf("���Աݾ��� �Է��ϼ���: ");
//	scanf("%d", &money);
//
//	if (tmp == 1 && money >=n1) {
//		result = money - n1;
//		printf("�Ž��� ���� %d���Դϴ�.", result);
//	}
//	else if (tmp == 2 && money >= n2) {
//		result = money - n2;
//		printf("�Ž��� ���� %d���Դϴ�.", result);
//	}
//	else if (tmp == 3 && money >= n3) {
//		result = money - n3;
//		printf("�Ž��� ���� %d���Դϴ�.", result);
//	}
//	else if (tmp == 4 && money >= n4) {
//		result = money - n4;
//		printf("�Ž��� ���� %d���Դϴ�.", result);
//	}
//	else {
//		printf("�����̳� �ݾ��� �ùٸ��� �ʽ��ϴ�.");
//	}
//	return 0; // 1102 ����� ���Ǳ� �����ϱ�
//}

//int main(void)
//{
//	int i, n;
//
//	printf("�� ���� �������� ����ұ��?");
//	scanf("%d", &n);
//
//	for (i = 2; i <= 9; i++) {
//		printf("%d X %d = %d\n", n, i, n * i);
//	}
//	return 0; // 1103 n�� ������ �����ϱ�
//}