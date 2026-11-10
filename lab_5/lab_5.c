#include <stdio.h>

void lab_5(void) {
    int task_num;

    while (1) {
        printf("\nЛабораторна робота 5: Одновимірні масиви (Студент N8)\n");
        printf("1 - Завдання 1 (Варіант 66)\n");
        printf("2 - Завдання 2 (Варіант 73)\n");
        printf("3 - Завдання 3 (Варіант 92)\n");
        printf("4 - Завдання 4 (Варіант 129)\n");
        printf("5 - Завдання 5 (Варіант 190)\n");
        printf("6 - Завдання 6 (Варіант 71)\n");
        printf("0 - Вийти з програми\n");
        printf("Виберіть номер підзавдання (1-6): ");

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
                printf("\nВаріант 66: Добуток від'ємних елементів масиву\n");
                int a[100], n;
                long long product = 1;
                int found = 0;

                printf("Введіть кількість елементів (1-100): ");
                if (scanf("%d", &n) != 1) return;
                if (n < 1 || n > 100) {
                    printf("Неправильна кількість елементів.\n");
                    break;
                }

                for (int i = 0; i < n; i++) {
                    printf("a[%d] = ", i + 1);
                    if (scanf("%d", &a[i]) != 1) return;
                }

                for (int i = 0; i < n; i++) {
                    if (a[i] < 0) {
                        product = product * a[i];
                        found = 1;
                    }
                }

                if (found) {
                    printf("Добуток від'ємних елементів: %lld\n", product);
                } else {
                    printf("У масиві немає від'ємних елементів.\n");
                }
                break;
            }

            case 2: {
                printf("\nВаріант 73: Найближчий елемент масиву\n");
                double a[15], x, min_diff, diff;
                int position = 0;

                printf("Введіть 15 чисел у порядку зростання:\n");
                for (int i = 0; i < 15; i++) {
                    printf("a[%d] = ", i + 1);
                    if (scanf("%lf", &a[i]) != 1) return;
                }

                printf("Введіть число для пошуку: ");
                if (scanf("%lf", &x) != 1) return;

                min_diff = a[0] - x;
                if (min_diff < 0) min_diff = -min_diff;

                for (int i = 1; i < 15; i++) {
                    diff = a[i] - x;
                    if (diff < 0) diff = -diff;

                    if (diff < min_diff) {
                        min_diff = diff;
                        position = i;
                    }
                }

                printf("Найближчий елемент: %.2f\n", a[position]);
                printf("Його порядковий номер: %d\n", position + 1);
                break;
            }

            case 3: {
                printf("\nВаріант 92: Видалення k-го елемента масиву A(50)\n");
                int a[50], k;

                printf("Введіть 50 цілих чисел:\n");
                for (int i = 0; i < 50; i++) {
                    printf("a[%d] = ", i + 1);
                    if (scanf("%d", &a[i]) != 1) return;
                }

                printf("Введіть номер елемента для видалення (1-50): ");
                if (scanf("%d", &k) != 1) return;
                if (k < 1 || k > 50) {
                    printf("Неправильний номер елемента.\n");
                    break;
                }

                for (int i = k - 1; i < 49; i++) {
                    a[i] = a[i + 1];
                }
                a[49] = 0;

                printf("Масив після видалення:\n");
                for (int i = 0; i < 50; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;
            }

            case 4: {
                printf("\nВаріант 129: Вставка числа у впорядкований масив\n");
                double a[101], b;
                int n, position;

                printf("Введіть кількість елементів (1-100): ");
                if (scanf("%d", &n) != 1) return;
                if (n < 1 || n > 100) {
                    printf("Неправильна кількість елементів.\n");
                    break;
                }

                printf("Введіть числа за неспаданням:\n");
                for (int i = 0; i < n; i++) {
                    printf("a[%d] = ", i + 1);
                    if (scanf("%lf", &a[i]) != 1) return;
                }

                printf("Введіть число для вставки: ");
                if (scanf("%lf", &b) != 1) return;

                position = n;
                while (position > 0 && a[position - 1] > b) {
                    a[position] = a[position - 1];
                    position--;
                }
                a[position] = b;
                n++;

                printf("Масив після вставки:\n");
                for (int i = 0; i < n; i++) {
                    printf("%.2f ", a[i]);
                }
                printf("\n");
                break;
            }

            case 5: {
                printf("\nВаріант 190: Чотиризначні числа з рівними сумами пар цифр\n");
                int a[100], n, found = 0;

                printf("Введіть кількість чисел (1-100): ");
                if (scanf("%d", &n) != 1) return;
                if (n < 1 || n > 100) {
                    printf("Неправильна кількість елементів.\n");
                    break;
                }

                for (int i = 0; i < n; i++) {
                    printf("a[%d] (1000-9999) = ", i + 1);
                    if (scanf("%d", &a[i]) != 1) return;
                    if (a[i] < 1000 || a[i] > 9999) {
                        printf("Потрібно вводити тільки чотиризначні числа.\n");
                        return;
                    }
                }

                printf("Підходять числа:\n");
                for (int i = 0; i < n; i++) {
                    int first = a[i] / 1000;
                    int second = (a[i] / 100) % 10;
                    int third = (a[i] / 10) % 10;
                    int fourth = a[i] % 10;

                    if (first + second == third + fourth) {
                        printf("%d ", a[i]);
                        found = 1;
                    }
                }

                if (!found) {
                    printf("Таких чисел немає.");
                }
                printf("\n");
                break;
            }

            case 6: {
                printf("\nВаріант 71: Сума елементів, більших за квадрат першого\n");
                int a[100], n, found = 0;
                long long square, sum = 0;

                printf("Введіть кількість елементів (1-100): ");
                if (scanf("%d", &n) != 1) return;
                if (n < 1 || n > 100) {
                    printf("Неправильна кількість елементів.\n");
                    break;
                }

                for (int i = 0; i < n; i++) {
                    printf("a[%d] = ", i + 1);
                    if (scanf("%d", &a[i]) != 1) return;
                }

                square = (long long)a[0] * a[0];
                for (int i = 0; i < n; i++) {
                    if (a[i] > square) {
                        sum = sum + a[i];
                        found = 1;
                    }
                }

                printf("Квадрат першого елемента: %lld\n", square);
                if (found) {
                    printf("Сума потрібних елементів: %lld\n", sum);
                } else {
                    printf("Елементів, більших за квадрат першого, немає.\n");
                }
                break;
            }

            default:
                printf("\nТакого завдання немає.\n");
                break;
        }
    }
}
