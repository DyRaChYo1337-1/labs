#include <stdio.h>

void lab_6(void) {
    int task_num;

    while (1) {
        printf("\nЛабораторна робота 6: Двовимірні масиви (Студент N8)\n");
        printf("1 - Завдання 1 (Варіант 975)\n");
        printf("2 - Завдання 2 (Варіант 989)\n");
        printf("3 - Завдання 3 (Варіант 1015)\n");
        printf("4 - Завдання 4 (Варіант 942)\n");
        printf("5 - Завдання 5 (Варіант 1010)\n");
        printf("0 - Вийти з програми\n");
        printf("Виберіть номер підзавдання (1-5): ");

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
                printf("\nВаріант 975: Квадратна матриця за зразком\n");
                int n, i, j;
                double a[20], b[20][20];

                printf("Введіть розмір матриці n (1-20): ");
                scanf("%d", &n);
                if (n < 1 || n > 20) {
                    printf("Неправильний розмір.\n");
                    break;
                }

                for (i = 0; i < n; i++) {
                    printf("Введіть a%d: ", i + 1);
                    scanf("%lf", &a[i]);
                }

                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        b[i][j] = a[(i + j) % n];
                    }
                }

                printf("Отримана матриця:\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        printf("%8.2f", b[i][j]);
                    }
                    printf("\n");
                }
                break;
            }

            case 2: {
                printf("\nВаріант 989: Чотиризначна сума елементів\n");
                int n, m, i, j;
                int a[20][20];
                long long sum = 0;

                printf("Введіть кількість рядків і стовпців (1-20): ");
                scanf("%d %d", &n, &m);
                if (n < 1 || n > 20 || m < 1 || m > 20) {
                    printf("Неправильний розмір.\n");
                    break;
                }

                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++) {
                        printf("a[%d][%d] = ", i + 1, j + 1);
                        scanf("%d", &a[i][j]);
                        sum += a[i][j];
                    }
                }

                printf("Сума елементів: %lld\n", sum);
                if ((sum >= 1000 && sum <= 9999) ||
                    (sum <= -1000 && sum >= -9999)) {
                    printf("Сума є чотиризначним числом.\n");
                } else {
                    printf("Сума не є чотиризначним числом.\n");
                }
                break;
            }

            case 3: {
                printf("\nВаріант 1015: Перевірка матриці\n");
                int n, i, j, k;
                int correct = 1;
                double a[20][20], sum;

                printf("Введіть розмір квадратної матриці (1-20): ");
                scanf("%d", &n);
                if (n < 1 || n > 20) {
                    printf("Неправильний розмір.\n");
                    break;
                }

                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        printf("a[%d][%d] = ", i + 1, j + 1);
                        scanf("%lf", &a[i][j]);
                    }
                }

                /* Скалярні добутки кожної пари різних рядків */
                for (i = 0; i < n; i++) {
                    for (j = i + 1; j < n; j++) {
                        sum = 0;
                        for (k = 0; k < n; k++) {
                            sum += a[i][k] * a[j][k];
                        }
                        if (sum > 0.000001 || sum < -0.000001) {
                            correct = 0;
                        }
                    }
                }

                /* Скалярні добутки кожної пари різних стовпців */
                for (i = 0; i < n; i++) {
                    for (j = i + 1; j < n; j++) {
                        sum = 0;
                        for (k = 0; k < n; k++) {
                            sum += a[k][i] * a[k][j];
                        }
                        if (sum > 0.000001 || sum < -0.000001) {
                            correct = 0;
                        }
                    }
                }

                if (correct == 1) {
                    printf("Для всіх різних рядків та стовпців скалярні добутки дорівнюють нулю.\n");
                } else {
                    printf("Умова не виконується: є ненульові скалярні добутки.\n");
                }
                break;
            }

            case 4: {
                printf("\nВаріант 942: Заміна побічної діагоналі на 100\n");
                int n, i, j;
                int a[20][20];

                printf("Введіть розмір квадратної матриці (1-20): ");
                scanf("%d", &n);
                if (n < 1 || n > 20) {
                    printf("Неправильний розмір.\n");
                    break;
                }

                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        printf("a[%d][%d] = ", i + 1, j + 1);
                        scanf("%d", &a[i][j]);
                    }
                }

                for (i = 0; i < n; i++) {
                    a[i][n - 1 - i] = 100;
                }

                printf("Матриця після заміни:\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        printf("%6d", a[i][j]);
                    }
                    printf("\n");
                }
                break;
            }

            case 5: {
                printf("\nВаріант 1010: Підрахунок прямокутників\n");
                int n, m, i, j;
                int count[256] = {0};
                char a[20][20];

                printf("Введіть кількість рядків і стовпців (1-20): ");
                scanf("%d %d", &n, &m);
                if (n < 1 || n > 20 || m < 1 || m > 20) {
                    printf("Неправильний розмір.\n");
                    break;
                }

                printf("Введіть символи поля (наприклад, # ? + = або .):\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++) {
                        scanf(" %c", &a[i][j]);
                    }
                }

                /* Рахуємо лише верхню ліву клітинку кожного прямокутника. */
                for (i = 0; i < n; i++) {
                    for (j = 0; j < m; j++) {
                        if (a[i][j] != '.' &&
                            (i == 0 || a[i - 1][j] != a[i][j]) &&
                            (j == 0 || a[i][j - 1] != a[i][j])) {
                            count[(unsigned char)a[i][j]]++;
                        }
                    }
                }

                printf("Кількість прямокутників за типами:\n");
                for (i = 0; i < 256; i++) {
                    if (count[i] > 0) {
                        printf("%c - %d\n", (char)i, count[i]);
                    }
                }
                break;
            }

            default:
                printf("\nТакого завдання немає.\n");
                break;
        }
    }
}

int main(void) {
    lab_6();
    return 0;
}
