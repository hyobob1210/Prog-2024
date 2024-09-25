#include <stdio.h>
int main()
{
	int a[1000] = { 0 };
	int n;

	printf("입력 숫자의 개수 : ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("숫자 입력 : ");
		scanf_s("%d", &a[i]);
	}



	// 앞에서부터 출력
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");

	// 뒤에서부터 출력
	
	for (int i = n - 1; i >= 0; i--)
		printf("%d ", a[i]);
	printf("\n");

	// 최댓값 찾기(탐색)
	int max = a[0];

	for (int i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	printf("max = %d\n", max);

}