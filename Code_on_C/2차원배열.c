#include<stdio.h>

//int main(void)
//{
//	int a[100][100];
//	int num, i,j,count=1;
//
//	scanf_s("%d", &num);
//	for (i = 0; i < num; i++){
//		for (j = 0; j < num; j++) {
//			a[i][j] = count;
//			count++;
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0; // 1190 1���� n*n���� ������� ����ϱ�
//}

//int main(void)
//{
//	int num,i,j,sum,avg1,avg2;
//	int a[100][100] = { 0 };
//
//	scanf_s("%d", &num);
//	for (i = 0; i < num; i++) { // �� �Է� �� �հ� 
//		sum = 0;
//		for (j = 0; j < num-1; j++) {
//			scanf_s("%d", &a[i][j], sizeof(a));
//			sum += a[i][j];
//		}
//		a[i][j] = sum;
//	}
//
//	for (i = 0; i < num - 1; i++) { // ��� �� �ֱ�
//		sum = 0;
//		for (j = 0; j < num; j++) {
//			sum += a[j][i];
//		}
//		a[j][i] = sum / num;
//	}
//
//	for (i = 0; i < num+1; i++) { // ��� ���
//		for (j = 0; j < num; j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0; // 1091 ��������
//}

//int main(void)
//{
//	int a[100][5];
//	int n,i,j,count=1;
//	scanf_s("%d", &n);
//	for (i = 0; i < 5; i++) {
//		if (i % 2 == 0) {
//			for (j = 0; j < 5; j++) {
//				a[i][j] = count;
//				count++;
//			}
//		}
//		else {
//			for (j = 4; j >= 0; j--) {
//				a[i][j] = count;
//				count++;
//			}
//		}
//	}
//	for (i = 0; i < 5; i++) {
//		for (j = 0; j < 5; j++) {
//			if (a[i][j] <= n)
//				printf("%d ", a[i][j]);
//			else
//				printf("  ");
//		}
//		printf("\n");
//	}
//	return 0; // 1192 ����� �����
//}