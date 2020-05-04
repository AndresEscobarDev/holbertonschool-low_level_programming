#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - program that print a keygen for the crackme5
 * 
 * 
 */
int main(int argc, char *argv[])
{
    int len = strlen(argv[1]), i, j;
    char codigo[] = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
    char password[6];

    (void)argc;
    j = (len ^ 59) & 63;
    password[0] = codigo[j];
    for (i = 0, j = 0; i < len; i++)
        j += argv[1][i];
    j = (j ^ 79) & 63;
    password[1] = codigo[j];
    for (i = 0, j = 1; i < len; i++)
        j *= argv[1][i];
    j = (j ^ 85) & 63;
    password[2] = codigo[j];
    for (i = 0, j = 0; i < len; i++)
    {
        if (j < argv[1][i])
            j = argv[1][i];
    }
    srand(j ^ 14);
    password[3] = codigo[rand() & 63];
    for (i = 0, j = 0; i < len; i++)
        j += argv[1][i] * argv[1][i];
    j = (j ^ 239) & 63;
    password[4] = codigo[j];
    for (i = 0, j = 0; i < argv[1][0]; i++)
        j = rand();
    j = (j ^ 229) & 63;
    password[5] = codigo[j];
    password[6] = 0;
    printf("%s", password);
    return(0);
}