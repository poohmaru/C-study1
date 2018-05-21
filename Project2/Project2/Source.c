#include <stdio.h>

/* func avg */
double avg(int t[]);

int main(void) {

	/* Leson 10.1

	int test[5] = { 80,60,55,22,75 };
	printf("value of test[0] is %d . \n", test[0]);
	printf("adress of test[0] is %p . \n", &test[0]);
	printf("value of test is %p . \n", test);
	printf("value of test+1 is %p . \n", test+1);
	printf("value of *(test+1) is %d . \n", *(test+1));
	return 0;
	*/

	/*Lesson 10.2*/

	int test[5];
	int i;
	double ans;
	
	printf("Enter test score of five peoples.\n");

	for (i = 0; i < 5; i++) {
		scanf_s("%d", &test[i]);
	}
	ans = avg(test);
	printf("average is %lf .\n", ans);
	return 0;
	

}

double avg(int t[]) {
	int i;
	double sum;

	sum = 0.0;
	for (i = 0; i < 5; i++) {
		sum += t[i];
	}
	return sum / 5;
}
