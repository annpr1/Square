#ifndef TESTS_H_INCLUDED
#define TESTS_H_INCLUDED
//--------------------------------------------------------------------------
//!
//! @param [in]  a a-coefficient for test
//! @param [in]  b b-coefficient for test
//! @param [in]  c c-coefficient for test
//! @param [in]  expected_numRoots right number of roots for this example
//!
//! @return 1 or 0 - was the solution correct or no
//!
//! @note   expected_x1 right x1 for this example
//!         expected_x2 right x2 for this example
//!         numRoots    number of roots
//!
//!-------------------------------------------------------------------------

int RunTest(struct Check Test);

//--------------------------------------------------------------------------
//!
//! @param [out] summ number of right answers
//!
//! @note   test_res[10] array with results of tests
//!
//!-------------------------------------------------------------------------

void CheckProgram();

#endif // TESTS_H_INCLUDED
