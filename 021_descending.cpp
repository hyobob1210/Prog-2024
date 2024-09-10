#include <iostream>

int main()
{
	int a, b, c;

	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b) {
		if (b > c) {
			printf("%d %d %d\n", a, b, c);
		}
		else {
			if (a > c)
				printf("%d %d %d\n", a, c, b);
			else {
				printf("%d %d %d", a, c, b);

			}
		}
	}

	else {
		if (a > c) {
			printf("%d %d %d\n", b, a, c);
		}
		else {
			if (b > c) {
				printf("%d %d %d\n", b, c, a);
			}
			else {

				printf("%d %d %d\n", c, b, a);
			}
		}
	}
}
