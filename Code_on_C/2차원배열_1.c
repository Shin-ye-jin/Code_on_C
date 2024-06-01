#include<stdio.h>

//int main(void) {
//	int a[100][100];
//	int n,i,j,count=1,x=0,y;
//
//	scanf_s("%d", &n);
//	y = n / 2;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			a[x][y] = count;
//			count++;
//			x = (x - 1 + n) % n;
//			y = (y + 1) % n;	
//		}
//		x = (x + 2 + n ) % n;
//		y = (y - 1 + n ) % n;
//	}
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			printf("%d  ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0; // 1093 마방진
//}

//int main(void)
//{
//	int h, w, count, i, j, x, y, text;
//	int a[100][100] = { 0 };
//
//	scanf_s("%d %d %d", &h, &w, &count);
//
//	for (i = 0; i < count; i++) {
//		scanf_s("%d", &text);
//		x = (text / 100) - 1;
//		y = (text % 100) - 1;
//		a[x][y] += 1;
//	}
//
//	for (i = 0; i < h; i++) {
//		for (j = 0; j < w; j++) {
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0; // 1095 스마트우편함
//}