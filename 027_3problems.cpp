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

   
    //while (i <= n) {
    //    printf("*");
    //    i++;
    //}
    //
    //// while 문(2)
    //i = 1;
    //while (i <= n) {
    //    printf("%d", i);
    //    i += 2;
    //}

    // while 문(3)
    int sum = 0;
    i = 1;
    
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("sum = %d\n", sum);
}
