#include <stdio.h>


int main() {

    // setting vars
    double number1;
    double number2;
    char  operator;

    printf("Enter the calculation seperated by the following operations (+, -, *, /): ");
    scanf("%lf %c %lf", &number1, &operator, &number2);


    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", number1, number2, number1 + number2);
            break;
        case '-':
            printf("%.2lf + %.2lf = %.2lf\n", number1, number2, number1 - number2);
            break;
        case '*':
            printf("%.2lf + %.2lf = %.2lf\n", number1, number2, number1 * number2);
            break;
        case '/':
            if (number2 != 0)
                printf("%.2lf + %.2lf = %.2lf\n", number1, number2, number1 / number2);
            else
                printf("Error: Dividing by zero! \n");
                break;
        default:
        printf("Invalid operator\n");
    }
    return 0;
}

