#include <stdio.h>

int main()
{
    int arr[5] = { 1, 3, 5, 7, 9 };
    int b[] = {  10, 20, 30, 40, 50 };
    int c[10] = { 1, 2, 3, 4, 5 };
    int d[10];

    for (int i = 0; i < 5; i++)
        printf("%d\n", arr[i]);

    for (int i = 0; i < 10; i++)
        printf("c[%d = %d\n", i, c[i]);

    for (int i = 0; i < 10; i++)
        printf("c[%d = %d\n", i, d[i]);
}
