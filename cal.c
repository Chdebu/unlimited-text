#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Input from the user
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero is not allowed.\n");
                return 1;  // Exit the program with an error code
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
            return 1;  // Exit the program with an error code
    }

    // Display the result
    printf("Result: %.2lf\n", result);

    return 0;  // Exit the program successfully
}
