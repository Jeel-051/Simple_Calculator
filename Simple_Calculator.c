//Simple Calculator
//24AIML058,24AIML051,24AIML047
#include <stdio.h>
#include <math.h> 

int main() {
    char operator;
    double num1, num2, result;
    int count, i;

    printf("Enter an operator (+, -, *, /, sqrt): ");
    scanf(" %c", &operator);

    if (operator == 's') {
        printf("Enter a number: ");
        scanf("%lf", &num1);
        if (num1 < 0) {
            printf("Error: Square root of a negative number is not allowed.\n");
        } else {
            result = sqrt(num1);
            printf("Result: %.2lf\n", result);
        }
    } else if (operator == '+') {
        printf("How many numbers do you want to add? ");
        scanf("%d", &count);

        result = 0; 
        printf("Enter %d numbers: ", count);
        for (i = 0; i < count; i++) {
            scanf("%lf", &num1);
            result += num1;
        }

        printf("Result: %.2lf\n", result);
    } else{
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (operator) {
            case '-':
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Error: Invalid operator.\n");
        }
    }

    return 0;
}
