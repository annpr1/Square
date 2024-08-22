#ifndef SQUARE_H_INCLUDED
#define SQUARE_H_INCLUDED

#define INF_ROOTS -1
#define NO_ROOTS  0
#define ONE_ROOT  1
#define TWO_ROOTS 2

//--------------------------------------------------------
//!
//! @param [in] struct square first structure with elements of square
//!
//! @return number of roots
//!
//! @note   INF_ROOTS infinity number of roots
//!         NO_ROOTS  no roots
//!         ONE_ROOT  one root
//!         TWO_ROOTS two roots
//!
//--------------------------------------------------------



struct square
{
    double a;
    double b;
    double c;
    double* x1;
    double* x2;
};

int SquareSolver(struct square first);
int LineEquation(struct square first);
int SquareEquation(struct square first);

#endif // SQUARE_H_INCLUDED
