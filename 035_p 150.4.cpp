﻿#include <stdio.h>

int main()
{
    int a[10][10];

    int x, y;

    printf("행과 열의 숫자를 입력 : ");
    scanf_s("%d %d", &x, &y);

    
    // 각 행의 합을 구하여 출력하라
    printf("각 행의 합을 출력 :\n");
    
    for (int i = 0; i < x; i++) {
        int sum = 0;
        for (int j = 0; j < y; j++)
            sum += a[i][j];
            printf("%4d\n", sum);
       
}
