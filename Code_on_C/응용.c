#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void)
{
	int year, month, day, birth;

	scanf("%d", &birth);

	day = birth % 100;
	month = (birth / 100) % 100;
	year = month / 100;

	if (month >= 3 && month <= 5)
		printf("����� ������ ���Դϴ�.");
	else if (month >= 6 && month <= 8)
		printf("����� ������ �����Դϴ�.");
	else if (month >= 9 && month <= 11)
		printf("����� ������ �����Դϴ�.");
	else
		printf("����� ������ �ܿ��Դϴ�.");

	return 0; // 1096 �� ������ ������?
}