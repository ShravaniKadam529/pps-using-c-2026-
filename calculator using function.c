#include <stdio.h>

double add(double num1, double num2) {
    return num1 + num2;
}

double subtract(double num1, double num2) {
    return num1 - num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

double divide(double num1, double num2) {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0; 
    }
}
int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); 

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            printf("Invalid operator.\n");
            return 1;
    }

    if (operator == '/' && num2 == 0) {
        
    } else {
        printf("Result: %.2lf\n", result);
    }

    return 0; 
}


