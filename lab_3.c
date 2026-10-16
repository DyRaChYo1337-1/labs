// приношу цей код як жертву замість Персня Влади.
#include <stdio.h>

int main() {
    int task_num;

    while (1) {
        printf("\nЛабораторна робота 3: Розгалуження (Студент N8)\n");
        printf("1 - Завдання 1 (Варіант 66)\n");
        printf("2 - Завдання 2 (Варіант 73)\n");
        printf("3 - Завдання 3 (Варіант 92)\n");
        printf("4 - Завдання 4 (Варіант 16)\n");
        printf("5 - Завдання 5 (Варіант 77)\n");
        printf("6 - Завдання 6 (Варіант 55)\n");
        printf("7 - Завдання 7 (Варіант 69)\n");
        printf("8 - Завдання 8 (Варіант 12)\n");
        printf("9 - Завдання 9 (Варіант 3)\n");
        printf("10 - Завдання 10 (Варіант 48)\n");
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
                printf("\nВаріант 66: Цегла і отвір\n");
                double a, b, x, y, z;
                printf("Введіть розміри отвору (A B): ");
                scanf("%lf %lf", &a, &b);
                printf("Введіть розміри цегли (X Y Z): ");
                scanf("%lf %lf %lf", &x, &y, &z);

                if ((x <= a && y <= b) || (y <= a && x <= b) ||
                    (x <= a && z <= b) || (z <= a && x <= b) ||
                    (y <= a && z <= b) || (z <= a && y <= b)) {
                    printf("Результат: Цегла пройде через отвір.\n");
                } else {
                    printf("Результат: Цегла НЕ пройде через отвір.\n");
                }
                break;
            }
            case 2: {
                printf("\nВаріант 73: Доступ за паролем\n");
                int pass;
                printf("Введіть пароль: ");
                scanf("%d", &pass);

                if (pass == 9583 || pass == 1747) {
                    printf("Рівень доступу: Доступні модулі баз А, В, С\n");
                } else if (pass == 3331 || pass == 7922) {
                    printf("Рівень доступу: Доступні модулі баз В, С\n");
                } else if (pass == 9455 || pass == 8997) {
                    printf("Рівень доступу: Доступний модуль бази С\n");
                } else {
                    printf("Доступ заборонено! Невірний пароль.\n");
                }
                break;
            }
            case 3: {
                printf("\nВаріант 92: Три однакові цифри\n");
                int n;
                printf("Введіть число (до 9999): ");
                scanf("%d", &n);

                int d1 = n / 1000;
                int d2 = (n / 100) % 10;
                int d3 = (n / 10) % 10;
                int d4 = n % 10;

                if ((d1 == d2 && d2 == d3) || 
                    (d1 == d2 && d2 == d4) || 
                    (d1 == d3 && d3 == d4) || 
                    (d2 == d3 && d3 == d4)) {
                    printf("Результат: Так, число містить три однакові цифри.\n");
                } else {
                    printf("Результат: Ні, число не містить трьох однакових цифр.\n");
                }
                break;
            }
            case 4: {
                printf("\nВаріант 16: Тризначний паліндром\n");
                int n;
                printf("Введіть тризначне число: ");
                scanf("%d", &n);
                
                int first = n / 100;
                int last = n % 10;
                
                if (first == last) {
                    printf("Результат: Число %d є паліндромом.\n", n);
                } else {
                    printf("Результат: Число %d НЕ є паліндромом.\n", n);
                }
                break;
            }
            case 5: {
                printf("\nВаріант 77: Опуклий чотирикутник\n");
                double x1, y1, x2, y2, x3, y3, x4, y4;
                printf("Введіть координати 4 вершин через пробіл (x1 y1 x2 y2 x3 y3 x4 y4):\n");
                scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
                
                double z1 = (x2 - x1) * (y3 - y2) - (y2 - y1) * (x3 - x2);
                double z2 = (x3 - x2) * (y4 - y3) - (y3 - y2) * (x4 - x3);
                double z3 = (x4 - x3) * (y1 - y4) - (y4 - y3) * (x1 - x4);
                double z4 = (x1 - x4) * (y2 - y1) - (y1 - y4) * (x2 - x1);
                
                if ((z1 >= 0 && z2 >= 0 && z3 >= 0 && z4 >= 0) || 
                    (z1 <= 0 && z2 <= 0 && z3 <= 0 && z4 <= 0)) {
                    printf("Результат: Чотирикутник є опуклим.\n");
                } else {
                    printf("Результат: Чотирикутник НЕ є опуклим.\n");
                }
                break;
            }
            case 6: {
                printf("\nВаріант 55: max(min(a,b), min(c,d))\n");
                double a, b, c, d, min1, min2, max_val;
                printf("Введіть 4 числа (a b c d): ");
                scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
                
                if (a < b) min1 = a; else min1 = b;
                if (c < d) min2 = c; else min2 = d;
                if (min1 > min2) max_val = min1; else max_val = min2;
                
                printf("Результат: %g\n", max_val);
                break;
            }
            case 7: {
                printf("\nВаріант 69: Ліфт у хмарочосі\n");
                int flat_num;
                printf("Введіть номер квартири: ");
                scanf("%d", &flat_num);
                
                int floor = (flat_num - 1) / 3 + 1;
                
                if (floor % 2 != 0) {
                    printf("Ліфт приїде прямо на ваш %d поверх.\n", floor);
                } else {
                    printf("Ліфт не зупиняється на %d поверсі. Він приїде на %d поверх (найближчий непарний).\n", floor, floor - 1);
                }
                break;
            }
            case 8: {
                printf("\nВаріант 12: Двозначне число\n");
                int n;
                printf("Введіть двозначне число: ");
                scanf("%d", &n);
                
                int d1 = n / 10;
                int d2 = n % 10;
                int sq = n * n;
                int sum_cubes_4 = 4 * (d1*d1*d1 + d2*d2*d2);
                
                if (sq == sum_cubes_4) {
                    printf("Результат: Так, %d дорівнює %d.\n", sq, sum_cubes_4);
                } else {
                    printf("Результат: Ні, %d не дорівнює %d.\n", sq, sum_cubes_4);
                }
                break;
            }
            case 9: {
                printf("\nВаріант 3: Аналіз цілого числа\n");
                int n;
                printf("Введіть ціле число: ");
                scanf("%d", &n);
                
                if (n % 2 == 0) {
                    printf("а) Число є парним.\n");
                } else {
                    printf("а) Число є непарним.\n");
                }
                
                if (n % 10 == 7 || n % 10 == -7) {
                    printf("б) Число закінчується цифрою 7.\n");
                } else {
                    printf("б) Число НЕ закінчується цифрою 7.\n");
                }
                
                int last_digit = n % 10;
                if (last_digit % 2 == 0) {
                    printf("в) Число закінчується парною цифрою.\n");
                } else {
                    printf("в) Число закінчується непарною цифрою.\n");
                }
                break;
            }
            case 10: {
                printf("\nВаріант 48: Прямокутний трикутник\n");
                double a, b, c;
                printf("Введіть сторони трикутника (a b c): ");
                scanf("%lf %lf %lf", &a, &b, &c);
                
                double eps = 0.0001;
                if (a*a + b*b >= c*c - eps && a*a + b*b <= c*c + eps) {
                    printf("Результат: Трикутник прямокутний, гіпотенуза 'c' (%g)\n", c);
                } else if (a*a + c*c >= b*b - eps && a*a + c*c <= b*b + eps) {
                    printf("Результат: Трикутник прямокутний, гіпотенуза 'b' (%g)\n", b);
                } else if (b*b + c*c >= a*a - eps && b*b + c*c <= a*a + eps) {
                    printf("Результат: Трикутник прямокутний, гіпотенуза 'a' (%g)\n", a);
                } else {
                    printf("Результат: Трикутник НЕ є прямокутним.\n");
                }
                break;
            }
            default:
                printf("\nТакого завдання немає! Спробуйте ще раз.\n");
                break;
        }
    }

    return 0;
}