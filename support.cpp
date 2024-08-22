#include <stdio.h>
#include <math.h>

#include "support.h"


int Compare_with_null(double n)
{
    if (fabs(n) < EPS)
        return 1;
    else
        return 0;
}

void Clear_board()
{
    while (getchar() != '\n')
    {
        ;
    }
}
