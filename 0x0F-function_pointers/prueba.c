#include <stdio.h>

int main (void)
{
    int i;
    int (*min)() = &main;

    for (i = 0; i < 9; i++)
    {
        printf("%02x ", (unsigned long int) min++);
    }
}
