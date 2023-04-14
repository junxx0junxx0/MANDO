#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) 
{
	int u, c;

	srand((int)time(NULL));

	printf("선택하시오(1: 가위 2: 바위 3: 보): ");
	scanf("%d", &u);

	c = rand() % 3 + 1;

	if (u == 1) {
		if (c == 1)
			printf("비겼음\n");
		else if (c == 2)
			printf("컴퓨터 2: 컴퓨터가 이겼음\n");
		else
			printf("컴퓨터 3: 사용자가 이겼음\n");
	}

	else if (u == 2) {
		if (c == 1)
			printf("컴퓨터 1: 사용자가 이겼음\n");
		else if (c == 2)
			printf("비겼음\n");
		else
			printf("컴퓨터 3: 컴퓨터가 이겼음\n");
	}

	else if (u == 3) {
		if (c == 1)
			printf("컴퓨터 1: 컴퓨터가 이겼음\n");
		else if (c == 2)
			printf("컴퓨터 2: 사용자가 이겼음\n");
		else
			printf("비겼음\n");
	}
	return 0;
}



