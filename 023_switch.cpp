﻿#include <stdio.h>

int main()
{
    int choice;

    printf("1. 새 게임 :\n");
    printf("2. 불러오기 :\n");
    printf("3. 설정 :\n");
    printf("4. 크레딧 :\n");
    printf("메뉴를 선택하시오 : \n");

    scanf_s("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("새 게임\n");
        break;
    case 2:
        printf("불러오기\n");
        break;
    case 3:
        printf("설정\n");
        break;
    case 4:
        printf("크레딧\n");
        break;
    default:
        printf("잘못 입력하셨습니다\n");
        break;

    }
    



}
