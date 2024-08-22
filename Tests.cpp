#include <stdio.h>

#include"Tests.h"
#include "Square.h"

int RunTest(double a, double b, double c, double expected_x1, double expected_x2, int expected_numRoots)
{
    double x1 = 0, x2 = 0;
    struct square test = {.a = a, .b = b, .c = c, .x1 = &x1, .x2 = &x2};
    int numRoots = SquareSolver(test);

    if (numRoots != expected_numRoots || x1 != expected_x1 || x2 != expected_x2)
    {
        printf("\nError Test, a = %lg, b = %lg, c = %lg, x1 = %lg, x2 = %lg, numRoots = %lg"
              "Expected x1 = %lg, x2 = %lg, numRoots = %lg\n", test.a, test.b, test.c,
              x1, x2, numRoots, expected_x1, expected_x2, expected_numRoots);
        return 0;
    }
    else
        return 1;

}

void CheckProgram()
{
 // массив структур
    int ans[10];
    ans[0] = RunTest(1,  4,  3,   -1,   -3,   2); //D > 0, два корня
    ans[1] = RunTest(1,  2,  3,    0,    0,   0); //D < 0, нет корней
    ans[2] = RunTest(1, -2,  1,    1,    0,   1); //D = 0, один корень
    ans[3] = RunTest(1,  5, 2.25, -0.5, -4.5, 2); //Дробный коэффициент
    ans[4] = RunTest(0,  0,  0,    0,    0,  -1); //a = 0, b = 0, c = 0, бесконечные решения
    ans[5] = RunTest(0,  0,  1,    0,    0,   0); //a = 0, b = 0, нет корней
    ans[6] = RunTest(0,  5,  1,   -0.2,  0,   1); //а = 0, один корень
    ans[7] = RunTest(1,  0, -4,    2,   -2,   2); //b = 0, два корня
    ans[8] = RunTest(1,  0,  0,    0,    0,   1); //b = 0, с = 0, один корень
    ans[9] = RunTest(4,  2,  0,    0,   -0.5, 2); //с = 0, два корня
    int i = 0, summ = 0;
    while (i < 10)
    {
        printf("Test %d: %d \n", i + 1, ans[i]);
        summ += ans[i];
        i++;
    }
    printf("Number of right answers %d", summ);

}
