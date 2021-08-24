#include <stdio.h>

int main (void)
{
    int n = 50;

    printf("%p\n", &n); //returns hexadecimal location in memory
    printf("%i\n", *&n); //goes to the address of memory

    int *p = &n;
    printf("%i\n", *p);
}