#include <stdio.h>

int main() {

	int x, y, z;
	int min = 0;

	printf("정수 3개를 입력하시오: ");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y)
		min = y;
	else if (y > x)
		min = x;

	if (z < min)
		min = z;

	printf("제일 작은 정수는 %d입니다.", min);

	return 0;
}