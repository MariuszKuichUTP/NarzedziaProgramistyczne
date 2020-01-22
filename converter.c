#include <stdio.h>
#include <stdlib.h>

int main()
{
    float number, mb;
    printf("Enter number of kilometers to convert: ");
    scanf("%f", &number);
    printf("Enter number of Megabajts to convert: ");
    scanf("%f", &mb);
    printf("\n%.2f km = %.2f m = %.2f dm = %.2f cm = %.2f mm\n", number, number*1000, number*10000, number*100000, number*1000000);
    printf("\n%.2f MB = %.2f kb = %.2f GB", mb, mb * 1024, mb / 1024);
    return 0;
}
