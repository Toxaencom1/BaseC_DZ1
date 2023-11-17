#include <stdio.h>
/*  Задача 1. Сумма трех чисел:
Ввести три числа, найти их сумму
Нужно напечатать сумму трех чисел
Данные на входе: Три целых числа через пробел
Данные на выходе: Строка вида %d+%d+%d=%d
    Задача 2. Сумма и произведение трех чисел
Ввести три числа, найти их сумму и произведение
Нужно напечатать сумму и произведение трех чисел
Данные на входе: Три целых числа через пробел
Данные на выходе: %d+%d+%d=%d
%d*%d*%d=%d
*/

int main()
{
    int numberA, numberB, numberC, sumRes, multyRes;
    char exit;
    do
    {
        printf("\nEnter A,B,C :");
        scanf("%d%d%d", &numberA, &numberB, &numberC);
        sumRes = numberA + numberB + numberC;
        multyRes = numberA * numberB * numberC;
        printf("\n%d + %d + %d = %d", numberA, numberB, numberC, sumRes);
        printf("\n%d * %d * %d = %d", numberA, numberB, numberC, multyRes);
        printf("\nContinue? type 'n' to exit: ");
        scanf("%s", &exit);
    } while (exit != 'n');
    return 0;
}
