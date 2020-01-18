#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number;
    do
    {
        printf("Enter number of gigabytes [GB] and gibibytes [GiB] to convert: ");
        scanf("%f", &number);
        if(number < 0) printf("Enter correct (non-negative) value!\n");
    }
    while(number < 0);

    printf("\n%.2f GB = %.2f MB = %.2f KB = %.2f B = %.2f b\n", number, number*1000, number*1000*1000, number*1000*1000*1000, number*1000*1000*1000*8);
    printf("\n%.2f GiB = %.2f MiB = %.2f KiB = %.2f B = %.2f b\n", number, number*1024, number*1024*1024, number*1024*1024*1024, number*1024*1024*1024*8);
    return 0;
}
