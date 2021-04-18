#ifndef SQUAR_EQ_H
#define SQUAR_EQ_H

typedef struct _eq {
    /* Количество решений */
    int sol_kol;

    /* Корни уравнения 1 и 2 */
    double sol_1;
    double sol_2;
} eq;

eq squar_equat(double a, double b, double c);

#endif // SQUAR_EQ_H
