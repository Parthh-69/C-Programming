#include <stdio.h>

int main()
{
    int a = 10, b = 5, c = 2, d = 3;
    int result;

    result = a + b * c - d;

    printf("Expression: a + b * c - d\n");
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    printf("\nOrder of execution:\n");
    printf("1. b * c = %d\n", b * c);
    printf("2. a + (b * c) = %d\n", a + (b * c));
    printf("3. (a + b * c) - d = %d\n", result);

    printf("\nFinal Result = %d\n", result);

    return 0;
}