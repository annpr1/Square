#ifndef SUPPORT_FUNCTIONS_H_INCLUDED
#define SUPPORT_FUNCTIONS_H_INCLUDED

#define EPS 0.00000001
#define INF_ROOTS -1
#define NO_ROOTS  0
#define ONE_ROOT  1
#define TWO_ROOTS 2

//--------------------------------------------------
//!
//! @param [in] n number that we compare with null
//!
//! @return 1 or 0 - is this number null or not
//!
//! @note   EPS number very close to null
//!
//--------------------------------------------------

int CompareFloats(double n1, double n2);

//--------------------------------------------------
//!
//! @param [in] symbol symbol thatClearBuffer we get from desk by getchar
//!
//--------------------------------------------------

void ClearBuffer();

void PrintResult(struct square first);

#endif // SUPPORT_FUNCTIONS_H_INCLUDED
