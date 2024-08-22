#ifndef SUPPORT_FUNCTIONS_H_INCLUDED
#define SUPPORT_FUNCTIONS_H_INCLUDED
#define EPS 0.00000001

//--------------------------------------------------
//!
//! @param [in] n number that we compare with null
//!
//! @return 1 or 0 - is this number null or not
//!
//! @note   EPS number very close to null
//!
//--------------------------------------------------

int Compare_with_null(double n);

//--------------------------------------------------
//!
//! @param [in] symbol symbol that we get from desk by getchar
//!
//--------------------------------------------------

void Clear_board();

#endif // SUPPORT_FUNCTIONS_H_INCLUDED
