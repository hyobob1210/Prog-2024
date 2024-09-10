#include <stdio.h>

int main()
{
    char c;
    printf("문자를 입력하세요:");
    scanf_s("%c", &c);
    printf("%c\n", c + 1);

    printf("%c %d %x\n", 'a', 'a', 'a');
}
