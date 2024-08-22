#include <stdio.h>
#include <math.h>

#include "support.h"
#include "Square.h"

int CompareFloats(double n1, double n2)
{
    if (fabs(n1 - n2) < EPS)
        return 1;
    else
        return 0;
}

void Clearbuffer()
{
    while (getchar() != '\n')
    {
        ;
    }
}

void PrintResult(struct square first)
{
    int NumRoots = SquareSolver(first);
    switch (NumRoots)
        {
            case NO_ROOTS:

                printf("No solutions\n");

                break;


            case ONE_ROOT:

                printf("x = %lg\n", *first.x1);

                break;


            case TWO_ROOTS:

                printf("x1 = %lg, x2 = %lg\n", *first.x1, *first.x2);

                break;

            case INF_ROOTS:

                printf("Any number\n");

                break;

        }
}
