#include<stdio.h>

//int main(void)
//{
//	int i,num;
//	int a[10];
//
//	scanf_s("%d", &num);
//	for (i = 0; i < num; i++)
//		scanf_s("%d", &a[i]);
//
//	for (i = 0; i < num; i++)
//		printf("%d ", a[i]);
//	return 0; // 1085 �迭�� ��/���
//}

//int main(void)
//{
//	int i, num;
//	int a[10];
//
//	scanf_s("%d", &num);
//	for (i = 0; i < num; i++)
//		scanf_s("%d", &a[i]);
//
//	for (i = num - 1; i >= 0; i--)
//		printf("%d ", a[i]);
//	return 0; // 1086 �迭�� ��/���(Reverse)
//}

//int main(void)
//{
//	char a[100];
//	scanf_s("%s", a,sizeof(a));
//	printf("%d", strlen(a));
//	return 0; // 1087 ���ڿ� ���� ���ϱ�
//}

//int main(void)
//{
//	char a[100];
//	int i;
//	scanf_s("%s", a, sizeof(a));
//	for (i = strlen(a)-1; i >= 0; i--)
//		printf("%c", a[i]);
//	return 0; // 1088 �Էµ� ���ڿ� �Ųٷ� ����ϱ�
//}

//int main(void)
//{
//	float sum=0, avg = 0;
//	int i=0,scores=0;
//	float num[100];
//
//	while (1) {
//		scanf_s("%f", &num[i], sizeof(num));
//		if (num[i] == -1)
//			break;
//		sum += num[i];
//		i++;
//		scores++;
//	}
//	avg = sum / scores;
//	printf("�����:%d\n", scores);
//	printf("�������:%.2f", avg);
//	return 0; // 1089 ������� ����
//}