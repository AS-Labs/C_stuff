#include <stdio.h>
//#include <stdlib.h>


int main(int argc, char *argv[]) {
    if ( argc != 4) {
        printf("Usage: %s number1 (+, -, /, x) number2\n", argv[0]);
        return 1;
    }

    extern int atoi (const char *__nptr);
    char *op = argv[2];
    int number1 = atoi(argv[1]);
    int number2 = atoi(argv[3]);
    if (*op == '+') {
        int sum = number1 + number2;
        printf("Sum: %d\n", sum);
    }
    if (*op == '-') {
        int sub = number1 - number2;
        printf("Sum: %d\n", sub);
    }
    if (*op == '/') {
        if (number2 == 0) {
            printf("Error dividing by zero!\n");
            return 1;
        }
        int div = number1 / number2;
        printf("Sum: %d\n", div);
    }
    if (*op == 'x') {
        int multi = number1 * number2;
        printf("Sum: %d\n", multi);
    }
}
