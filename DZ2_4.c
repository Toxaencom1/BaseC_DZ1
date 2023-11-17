#include <stdio.h>
/*  Задача 4. Найти среднее арифметическое цифр
числа
На вход подается произвольное четырехзначное число
Нужно напечатать среднее арифметическое цифр
Данные на входе: Четырехзначное целое положительное число
Данные на выходе: Вещественное число в формате %.2f
*/

int main()
{
    int number = 0, count = 0;
    double res = 0;
    int arr[4];
    char exit;
    do
    {
        printf("\nEnter number: ");
        do
        {
            if (number < 0 || number > 10000)
            {
                printf("Incorrect number\n");
            }
            scanf("%d", &number);
        } while (number < 0 || number > 10000);

        arr[0] = number / 1000;
        arr[1] = number % 1000 / 100;
        arr[2] = number % 100 / 10;
        arr[3] = number % 10;
        printf("%d %d %d %d", arr[0], arr[1], arr[2], arr[3]);

        for (int i = 0; i < 4; i++)
        {
            if (arr[i] != 0)
            {
                count++;
            }
            res += arr[i];
        }

        res = (double)res / count;
        printf("\n%.2f", res);

        res = 0;
        count = 0;
        printf("\nContinue? type 'n' to exit: ");
        scanf("%s", &exit);
    } while (exit != 'n');

    return 0;
}
