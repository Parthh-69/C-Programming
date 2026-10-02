#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Using while loop
    printf("\nMultiplication Table using While Loop:\n");
    i = 1;
    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }

    // Using do-while loop
    printf("\nMultiplication Table using Do-While Loop:\n");
    i = 1;
    do
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    } while (i <= 10);

    // Using for loop
    printf("\nMultiplication Table using For Loop:\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}