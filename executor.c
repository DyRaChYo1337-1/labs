
#include <stdio.h>

void lab_2(void);
void lab_3(void);
void lab_4(void);
void lab_5(void);
void lab_6(void);

int main(void) {
    int choice;

    while (1) {
        printf("\n2. Lab 2\n");
        printf("3. Lab 3\n");
        printf("4. Lab 4\n");
        printf("5. Lab 5\n");
        printf("6. Lab 6\n");
        printf("0. Exit\n");
        printf("Choose: ");

        if (scanf("%d", &choice) != 1) {
            return 1;
        }

        switch (choice) {
            case 2: lab_2(); break;
            case 3: lab_3(); break;
            case 4: lab_4(); break;
            case 5: lab_5(); break;
            case 6: lab_6(); break;
            case 0: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
