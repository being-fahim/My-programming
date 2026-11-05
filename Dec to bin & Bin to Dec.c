#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    printf("Enter a decimal number to convert binary: ");
    scanf("%d", &a);
    char b[129];

    //convertion dec to bin ----->
    snprintf(b, sizeof(b), "%b", a);
    printf("The binary value of %d: %s", a, b);

    //Re-convertion bin to dec ----->
    int c = (int)strtol(b, NULL, 2);
    printf("\nAgain convert the bin to dec: %d", c);
}
