#include <stdio.h>
#include "Header.h"
#define MAX(x,y) (x > y ? x :y)

int main(void) {
	//about function-like macro and pointer
	int num1, num2, ans, ans1;

	printf("Enter an integer number.\n");
	scanf_s("%d", &num1);
	printf("Then enter an integer number.\n");
	scanf_s("%d", &num2);

	ans = min(num1, num2);
	ans1 = MAX(num1, num2);
	printf("最小値は、%dです。\n", ans);
	printf("MAX is %d . \n", ans1);
	printf("num1のアドレスは　%p.\nans1のアドレスは%p.\n", &num1, &ans1);

	//Lesson9-practice 
	int scr1, scr2, addNum;
	printf("Enter tow subject scores .\n");
	scanf_s("%d", &scr1);
	scanf_s("%d", &scr2);
	printf("Enter a number you want to add them .");
	scanf_s("%d", &addNum);
	add(scr1, scr2, addNum);
	printf("%d　点加算したので、科目１は%d点\n科目２は%d点となりました。\n", addNum, scr1,scr2);


}


//dif function
int min(int x, int y) {
	if (x > y)
		return y;
	else
		return x;
}

int add(int a, int b, int c) {
	a += c;
	b += c;

	return 0;

}