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

    if (CompareFloats(first.a, 0))
    {
        return LineEquation(first);
    }
    else
    {
        return SquareEquation(first);
    }

}

int LineEquation(struct square first)
{
    if (CompareFloats(first.b, 0))
        {
            return (CompareFloats(first.c, 0)) ? INF_ROOTS : NO_ROOTS;
        }
        else
        {
            *first.x1 = -first.c / first.b;
            return ONE_ROOT;
        }
}

int SquareEquation(struct square first)
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
            double discr = first.b * first.b - 4 * first.a * first.c;
            if (discr > 0)
            {
                *first.x1 = (-first.b + sqrt(discr)) / (2 * first.a);
                *first.x2 = (-first.b - sqrt(discr)) / (2 * first.a);
                return TWO_ROOTS;
            }
            else if (discr < 0)
                return NO_ROOTS;
            else
            {
                *first.x1 = (-first.b + sqrt(discr)) / (2 * first.a);
                return ONE_ROOT;
            }
        }
}
