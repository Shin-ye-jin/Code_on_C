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
//	printf("%d�ð� %d��", h, m);
//	return 0; // 1111 �ð� ��ȯ�ϱ�
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
//	return 0; // 1112 �츮 �ݿ��� Ű�� ���� ū �л���?
//}


//int main(void)
//{
//	int length, i;
//	char str[50];
//	char* strN;
//	printf("��ȯ ��ų ���ڸ� �Է��ϼ��� : ");
//	scanf("%s", str);
//	length = strlen(str);
//	strN = str;
//	printf("��ȯ ��� : ");
//	
//	for (i = length; i > 0;) {
//		printf("%c", *strN++);
//		i--;
//		if (i > 0 && (i % 3) == 0) {
//			printf(",");
//		}
//	}
//
//	return 0; // 1113 �ݾ� �Է� �� õ ���� �޸� ��� !!
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
//				printf("ȸ����!");
//			}
//		}
//		else {
//			printf("ȸ���� �ƴ�!");
//			break;
//		}
//	}
//	return 0; // 1114 �ⷯ�� �丶�� ������ �ε��� ���˺� �쿵��, ȸ��!
//}