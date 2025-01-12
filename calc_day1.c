#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// using a compare function with a while loop
////int compare_str(const char *str1, const char *str2) {
////    while (*str1 && (*str1 == *str2)) {
////        str1++;
////        str2++;
////    }
////    return *(unsigned char *)str1 - *(unsigned char *)str2;
////}
////
////int main() {
////    char op[10];
////    printf("Enter the operation: +, -, /, *\n");
////    scanf("%c", op);
////
////    if (compare_str(op, "+") == 0){
////        printf("\nOperation is addition");
////    }
////
////    else if (compare_str(op, "-") == 0) {
////        printf("\nOperation is subtraction");
////    }
////
////    else if (compare_str(op, "/") == 0) {
////        printf("\nOperation is division");
////    }
////
////    else if (compare_str(op, "*") == 0) {
////        printf("\nOperation is multiplication");
////    }
////    return 0;
////}
int main(int argc, char *argv[]) {
    if (argc != 4){
        printf("Usage: %s number1 (+, -, / ,x) number2\n", argv[0]);
        return 1;
    }

    int number1 = atoi(argv[1]);
    char *op = argv[2];
    int number2 = atoi(argv[3]);

    // operations
    char multiply = 'x';
    char divide = '/';
    char addition = '+';
    char subtraction = '-';

    if (*op == addition){
        printf("\nOperation is addition\n");
        printf("\n %d %c %d\n", number1, *op, number2);
        int sum = number1 + number2;
        printf("\nSum: %d\n", sum);

    }

    else if (*op == subtraction){
        printf("\nOperation is subtraction\n");
        printf("\n %d %c %d\n", number1, *op, number2);
        int difference = number1 - number2;
        printf("\nDifference: %d\n", difference);
    }

    else if (*op == divide){
        printf("\nOperation is division\n");
        printf("\n %d %c %d\n", number1, *op, number2);
        if (number2 != 0) {
            float quotient = (float)number1 / number2;
            printf("Quotient: %.2f\n", quotient);
        }
    }

    else if (*op == multiply){
        printf("\nOperation is multiplication\n");
        printf("\n %d %c %d\n", number1, *op, number2);
        int product = number1 * number2;
        printf("\nProduct: %d\n", product);
    }
    return 0;
}
