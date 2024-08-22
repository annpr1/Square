#include <stdio.h>
#include <assert.h>
#include <math.h>

#include "Square.h"
#include "support.h"

int SquareSolver(struct square first)
{
    assert(first.x1 != NULL);
    assert(first.x2 != NULL);
    assert(first.x1 != first.x2);

    if (Compare_with_null(first.a))
    {
        if (Compare_with_null(first.b))
        {
            return (Compare_with_null(first.c)) ? INF_ROOTS : NO_ROOTS;
        }
        else
        {
            *first.x1 = -first.c / first.b;
            return ONE_ROOT;
        }
    }
    else
    {
        if (first.b == 0)
        {
            if (first.c == 0)
            {
                *first.x1 = 0;
                return ONE_ROOT;
            }
            else
            {
                if (-first.c / first.a >= 0)
                {
                    *first.x1 = sqrt(-first.c / first.a);
                    *first.x2 = -sqrt(-first.c / first.a);
                    return TWO_ROOTS;
                }
                else
                    return NO_ROOTS;
            }
        }
        else
        {
            if ((pow(first.b, 2) - 4 * first.a * first.c) > 0)
            {
                *first.x1 = (-first.b + sqrt(pow(first.b, 2) - 4 * first.a * first.c)) / (2 * first.a);
                *first.x2 = (-first.b - sqrt(pow(first.b, 2) - 4 * first.a * first.c)) / (2 * first.a);
                return TWO_ROOTS;
            }
            else if ((first.b * first.b - 4 * first.a * first.c) < 0)
                return NO_ROOTS;
            else
            {
                *first.x1 = (-first.b + sqrt(pow(first.b, 2) - 4 * first.a * first.c)) / (2 * first.a);
                return ONE_ROOT;
            }
        }
    }

}
