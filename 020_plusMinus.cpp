#include <stdio.h>

int main()
{
    int n;

    printf("숫자 입력 : ");
    scanf_s("%d", &n);

    if (n > 0)
        printf("n은 양수입니다");
    else if (n == 0)
        printf("n은 0입니다");
    else (n < 0)
        printf("n은 음수입니다");

}

