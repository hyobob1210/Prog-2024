// 1. 별표를 n개 출력한다
// 2. 1부터 n까지 홀수를 구한다.
// 3. 1부터 n까지 자연수를 모두 더한다.
#include <stdio.h>

int main()
{
        // while 문(1)
        int n;
        int i = 1;


        printf("n을 입력 : ");
        scanf_s("%d", &n);

        // (1)
        for (int i = 1; i <= n; i++)
            printf("*");
        printf("\n");

        // (2)
        for (int i = 1; i <= n; i += 2)
            printf("%d", i);
        printf("\n");

        // (3)
        int sum = 0;
        for (int i = 1; i <= n; i++){
            sum += i;
        }
        printf("%d\n", sum);
}

