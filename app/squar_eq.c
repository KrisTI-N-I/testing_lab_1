#include "math.h"
#include "squar_eq.h"

eq squar_equat(double a, double b, double c)
{
    eq solutions;
    solutions.sol_kol = 0;
    double disc = b*b - 4*a*c;

    if (a == 0 && b == 0) {
        return solutions;
    }

    if (a == 0 && b != 0) {
        solutions.sol_kol = 1;
        solutions.sol_1 = -c/b;
        return solutions;
    }

    /* Дискриминант меньше нуля, решений нет */
    if (disc < 0) {
        return solutions;
    }

    solutions.sol_1 = (-b - sqrt(disc))/ (2*a);
    solutions.sol_2 = (-b + sqrt(disc))/ (2*a);

    /* Дискриминант равен нулю, одно решение */
    if (disc == 0) {
        solutions.sol_kol = 1;
        return solutions;
    }

    /* Дискриминант больше нуля, два решения */
    solutions.sol_kol = 2;

    return solutions;
}
