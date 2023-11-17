#include <stdio.h>
/*  Задача 3. Разность двух чисел
Ввести два числа и найти их разность
Нужно напечатать разность двух чисел
Данные на входе: Два целых числа через пробел
Данные на выходе: Одно целое число
*/

int main()
{
    int numberA, numberB, res;
    char exit;
    do
    {
        printf("\nEnter numbers A and B:");
        scanf("%d%d", &numberA, &numberB);
        res = numberA - numberB;
        printf("\n%d", res);
        printf("\nContinue? type 'n' to exit: ");
        scanf("%s", &exit);
    } while (exit != 'n');

    return 0;
}
