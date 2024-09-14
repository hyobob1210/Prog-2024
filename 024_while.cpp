#include <stdio.h>

int main()
{
    int i = 1;

    while (i <= 10) { 
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // do - while
    int x = 1;
    
    do {
        printf("%d ", x);
        x++;
    } while (x <= 10);
}
