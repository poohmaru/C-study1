#include <stdio.h>
#include "Header.h"

int main(void) {

	int num1, num2, ans;

	printf("Enter an integer number.\n");
	scanf_s("%d", &num1);
	printf("Then enter an integer number.\n");
	scanf_s("%d", &num2);

	ans = min(num1, num2);
	printf("最小値は、%dです。\n", ans);
	printf("num1のアドレスは　%p.\n", &num1);


}

int min(int x, int y) {
	if (x > y)
		return y;
	else
		return x;
}