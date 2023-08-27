#include <stdio.h>
/**
 * print_fibonacci - prints numbers
 *
 * Description: print numbers
 *
 * Return: numbers
 */
int print_fibonacci()
{
        int arr[98];
        arr[0] = 1;
        arr[1] = 2;
        int i;

        printf("%d, ", arr[0]);
        printf("%d, ", arr[1]);

        for (i = 2; i < 98; i++)
        {
                arr[i] = arr[i-1] + arr[i-2];
                printf("%d, ", arr[i]);
        }
}

int main()
{

    print_fibonacci();

    return 0;
}
