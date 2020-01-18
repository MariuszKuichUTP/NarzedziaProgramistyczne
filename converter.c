#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number;
    printf("Enter number of gigabytes [GB] to convert: ");
    scanf("%f", &number);
    printf("\n%.2f GB = %.2f MB = %.2f KB = %.2f B = %.2f b\n", number, number*1000, number*1000000, number*1000000000, number*8000000000);
    return 0;
}
