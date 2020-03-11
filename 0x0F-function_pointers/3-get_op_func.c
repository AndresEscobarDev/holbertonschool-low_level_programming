#include "3-calc.h"
int (*get_op_func(char *s))(int j1, int j2)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    i = 0;
    while (i < sizeof(ops))
    {
        if (ops[i][0] == s)
        {
            i = ops[i][1](j1, j2);
            return(i);
        }
    }
    printf("Error\n");
    exit(99);
}