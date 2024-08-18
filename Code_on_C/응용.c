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
		printf("당신의 생일은 봄입니다.");
	else if (month >= 6 && month <= 8)
		printf("당신의 생일은 여름입니다.");
	else if (month >= 9 && month <= 11)
		printf("당신의 생일은 가을입니다.");
	else
		printf("당신의 생일은 겨울입니다.");

	return 0; // 1096 내 생일의 계절은?
}