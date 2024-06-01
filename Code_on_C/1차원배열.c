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
//	return 0; // 1085 배열의 입/출력
//}

int main(void)
{
	int i, num;
	int a[10];

	scanf_s("%d", &num);
	for (i = 0; i < num; i++)
		scanf_s("%d", &a[i]);

	for (i = num - 1; i >= 0; i--)
		printf("%d ", a[i]);
	return 0; // 1086 배열의 입/출력(Reverse)
}