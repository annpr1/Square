#include <stdio.h>

#include "Tests.h"
#include "Square.h"

#define NUM_TESTS 10

struct Check
{
    double a;
    double b;
    double c;
    double exp_x1;
    double exp_x2;
    int exp_num;
};

int RunTest(struct Check Test)
{
    double x1 = 0, x2 = 0;
    struct square test = {.a = Test.a, .b = Test.b, .c = Test.c, .x1 = &x1, .x2 = &x2};
    int numRoots = SquareSolver(test);

    if (numRoots != Test.exp_num || x1 != Test.exp_x1 || x2 != Test.exp_x2)
    {
        printf("\nError Test, a = %lg, b = %lg, c = %lg, x1 = %lg, x2 = %lg, numRoots = %lg\n"
              "Expected x1 = %lg, x2 = %lg, numRoots = %lg\n", test.a, test.b, test.c,
              x1, x2, numRoots, Test.exp_x1, Test.exp_x2, Test.exp_num);
        return 0;
    }
    else
        return 1;

}

void CheckProgram(char* test_file)
{
    FILE* f = fopen(test_file, "r");

    struct Check Test[10] = {};

    int test_res[NUM_TESTS];
    int i = 0, summ = 0, n = 0;

    while (i < NUM_TESTS)
    {
        n = fscanf(f, "%lg %lg %lg %lg %lg %d\n",
                    &Test[i].a, &Test[i].b, &Test[i].c, &Test[i].exp_x1, &Test[i].exp_x2, &Test[i].exp_num);
        test_res[i] = RunTest(Test[i]);

        printf("Test %d: %d \n", i + 1, test_res[i]);
        summ += test_res[i++];
    }

    fclose(f);
    printf("Number of right answers %d", summ);

}
