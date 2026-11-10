#include <stdio.h>
#include <math.h>

void lab_4(void) {
    int task_num;

    while (1) {
        printf("\nЛабораторна робота 4: Циклічні алгоритми (Студент N8)\n");
        printf("1 - Завдання 1 (Варіант 66)\n");
        printf("2 - Завдання 2 (Варіант 73)\n");
        printf("3 - Завдання 3 (Варіант 92)\n");
        printf("4 - Завдання 4 (Варіант 129)\n");
        printf("5 - Завдання 5 (Варіант 190)\n");
        printf("6 - Завдання 6 (Варіант 1)\n");
        printf("7 - Завдання 7 (Варіант 128)\n");
        printf("8 - Завдання 8 (Варіант 17)\n");
        printf("9 - Завдання 9 (Варіант 234)\n");
        printf("10 - Завдання 10 (Варіант 225)\n");
        printf("0 - Вийти з програми\n");
        printf("Виберіть номер підзавдання (1-10): ");

        if (scanf("%d", &task_num) != 1) {
            printf("Помилка вводу!\n");
            break;
        }

        if (task_num == 0) {
            printf("Роботу завершено.\n");
            break;
        }

        switch (task_num) {
            case 1: {
                printf("\nВаріант 66: Піднесення числа до степеня\n");
                double a, result = 1;
                int n, i;

                printf("Введіть число a та натуральний степінь n: ");
                if (scanf("%lf %d", &a, &n) != 2) return;

                if (n < 1) {
                    printf("Степінь n має бути натуральним числом.\n");
                    break;
                }

                for (i = 1; i <= n; i++) {
                    result = result * a;
                }

                printf("Результат: %.6f\n", result);
                break;
            }
            case 2: {
                printf("\nВаріант 73: Сума 1 + 1/1! + ... + 1/n!\n");
                int n, i, factorial = 1;
                double sum = 1;

                printf("Введіть n (від 2 до 10): ");
                if (scanf("%d", &n) != 1) return;

                if (n < 2 || n > 10) {
                    printf("n має бути від 2 до 10.\n");
                    break;
                }

                for (i = 1; i <= n; i++) {
                    factorial = factorial * i;
                    sum = sum + 1.0 / factorial;
                }

                printf("Сума: %.6f\n", sum);
                break;
            }
            case 3: {
                printf("\nВаріант 92: Середня оцінка з фізики 20 учнів\n");
                int i, grade, sum = 0;
                double average;

                for (i = 1; i <= 20; i++) {
                    printf("Введіть оцінку учня %d: ", i);
                    if (scanf("%d", &grade) != 1) return;
                    sum = sum + grade;
                }

                average = sum / 20.0;
                printf("Середня оцінка: %.2f\n", average);
                break;
            }
            case 4: {
                printf("\nВаріант 129: Чотиризначні числа, рівні сумі п'ятих степенів цифр\n");
                int number, temp, digit, power, sum, i;
                int count = 0;

                for (number = 1000; number <= 9999; number++) {
                    temp = number;
                    sum = 0;

                    while (temp > 0) {
                        digit = temp % 10;
                        power = 1;

                        for (i = 1; i <= 5; i++) {
                            power = power * digit;
                        }

                        sum = sum + power;
                        temp = temp / 10;
                    }

                    if (sum == number) {
                        printf("Знайдено число: %d\n", number);
                        count++;
                    }
                }

                if (count == 0) {
                    printf("Таких чисел немає.\n");
                }
                break;
            }
            case 5: {
                printf("\nВаріант 190: Перша сума 1 + 1/2 + ... + 1/k, більша за n\n");
                double n, sum = 1;
                int k = 1;

                printf("Введіть число n: ");
                if (scanf("%lf", &n) != 1) return;

                while (sum <= n) {
                    k++;
                    sum = sum + 1.0 / k;
                }

                printf("Номер елемента: %d\n", k);
                printf("Його значення: %.6f\n", sum);
                break;
            }
            case 6: {
                printf("\nВаріант 1: Число у зворотному порядку\n");
                int number, original, reversed = 0, digit;

                printf("Введіть натуральне число: ");
                if (scanf("%d", &number) != 1) return;

                if (number <= 0) {
                    printf("Число має бути натуральним.\n");
                    break;
                }

                original = number;

                while (number > 0) {
                    digit = number % 10;
                    reversed = reversed * 10 + digit;
                    number = number / 10;
                }

                printf("Початкове число: %d\n", original);
                printf("Обернене число: %d\n", reversed);

                if (reversed > original) {
                    printf("Обернене число більше.\n");
                } else if (reversed < original) {
                    printf("Початкове число більше.\n");
                } else {
                    printf("Числа рівні.\n");
                }
                break;
            }
            case 7: {
                printf("\nВаріант 128: Двозначне число за цифрами\n");
                int tens, ones, number;

                for (tens = 1; tens <= 9; tens++) {
                    for (ones = 0; ones <= 9; ones++) {
                        number = tens * 10 + ones;

                        if (number == tens * tens * tens + ones * ones) {
                            printf("Знайдено число: %d\n", number);
                        }
                    }
                }
                break;
            }
            case 8: {
                printf("\nВаріант 17: Таблиця множення на n\n");
                int n, i;

                printf("Введіть n (від 1 до 9): ");
                if (scanf("%d", &n) != 1) return;

                if (n < 1 || n > 9) {
                    printf("n має бути від 1 до 9.\n");
                    break;
                }

                for (i = 1; i <= 10; i++) {
                    printf("%d * %d = %d\n", n, i, n * i);
                }
                break;
            }
            case 9: {
                printf("\nВаріант 234: F(x) = sqrt(x) * cos(x) * cos(x)\n");
                double a, b, h, x, y;

                printf("Введіть початок a, кінець b і крок h: ");
                if (scanf("%lf %lf %lf", &a, &b, &h) != 3) return;

                if (h <= 0 || a > b) {
                    printf("Неправильні межі або крок.\n");
                    break;
                }

                printf("x\tF(x)\n");
                for (x = a; x <= b + 0.000001; x = x + h) {
                    if (x >= 0) {
                        y = sqrt(x) * cos(x) * cos(x);
                        printf("%.2f\t%.6f\n", x, y);
                    } else {
                        printf("%.2f\tне визначено\n", x);
                    }
                }
                break;
            }
            case 10: {
                printf("\nВаріант 225: F(x) = sin(x) * sin(x)\n");
                double a, b, h, x, y;

                printf("Введіть початок a, кінець b і крок h: ");
                if (scanf("%lf %lf %lf", &a, &b, &h) != 3) return;

                if (h <= 0 || a > b) {
                    printf("Неправильні межі або крок.\n");
                    break;
                }

                printf("x\tF(x)\n");
                for (x = a; x <= b + 0.000001; x = x + h) {
                    y = sin(x) * sin(x);
                    printf("%.2f\t%.6f\n", x, y);
                }
                break;
            }
            default: {
                printf("Такого завдання немає! Спробуйте ще раз.\n");
                break;
            }
        }
    }
}

int main(void) {
    lab_4();
    return 0;
}
