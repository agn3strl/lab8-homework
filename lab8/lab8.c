#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");
    int n, i;
    double a;
    puts("¬ведите число a:");
    scanf("%lf", &a);
    puts("¬ведите число n:");
    scanf("%d", &n);
    if (a == 0) puts("ѕараметр а не должен быть равен нулю");
    else
        {
        if (a + n == 0) puts("Cумма параметров не должна быть равна нулю");
        else
            {
            if (n < 0) puts("ќшибка: n должно быть больше нул€");
            else
                {
                double d = a;
                double res = 1. / a;
                for (i = 1; i <= n; i++)
                    {
                    if (a + i == 0) puts("Cумма параметров не должна быть равна нулю");
                    else
                        {
                        d *= a + i;
                        res += 1. / d;
                        }
                    }
                printf("–езультат равен %lf", res);
                }
            }
        }
    return 0;
}