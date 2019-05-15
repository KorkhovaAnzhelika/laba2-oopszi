#include <stdio.h>
#include <math.h>

double f(double x) {
	if (x <= 3) {
		return x * x - 3 * x + 9;
	}
	else {
		return 1 / (pow(x, 3.0) + 6);
	}
}

_Bool isInArea(double x, double y) {
	if ((y >= 0 && sqrt(x * x + y * y) <= 1) || (x > 0 && y < 0 && sqrt(x * x + y * y) <= 1)) return 1;
	else return 0;
}

int main()
{
	int selection = 0;
	double x = 0, y = 0;
	printf("Type 1 for task1 or 2 for task2: ");
	scanf_s("%d", &selection);
	switch (selection) {
	case 1:
		printf("x = ");
		scanf_s("%lf", &x);
		printf("y = ");
		scanf_s("%lf", &y);
		printf("task 1 : %d\n\n\n", isInArea(x, y));
		break;
	case 2:
		printf("x = ");
		scanf_s("%lf", &x);
		printf("task 2 : %f\n\n\n", f(x));
		break;
	}
	return 0;
}
