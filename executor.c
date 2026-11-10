
#include <stdio.h>

#include "lab_2/lab_2.c"
#include "lab_3/lab_3.c"
#include "lab_4/lab_4.c"
#include "lab_5/lab_5.c"

int main(void) {
    int choice;

    while (1) {
        printf("\n2. Lab 2\n");
        printf("3. Lab 3\n");
        printf("4. Lab 4\n");
        printf("5. lab 5\n");
        printf("0. Exit\n");
        printf("Choose: ");

        if (scanf("%d", &choice) != 1)
            return 1;

        switch (choice) {
            case 2: lab_2(); break;
            case 3: lab_3(); break;
            case 4: lab_4(); break;
            case 5: lab_5(); break;
            case 0: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
