#include <stdio.h>
#include <math.h>

// The main function of our code
int main(void) {

    // Declaring the variables needed for our code to function
    double val_1;
    double val_2;
    double ans = 0;
    char operation;

    // Asks for and then assigns a value to our
    printf("Write your equation: x <operation> y\n");
    scanf("%lf %c %lf", &val_1, &operation, &val_2);
    
    // If statements to count with
    if (operation == '+') {
        ans = val_1 + val_2;
    } else if (operation == '-') {
        ans = val_1 - val_2;
    } else if (operation == '*') {
        ans = val_1 * val_2;
    } else if (operation == '/') {
        ans = val_1 / val_2;
    } else if (operation == '^') {
        ans = pow(val_1, val_2);
    } else {
        printf("Operator was invalid\n");
        return 0;
    }

    // Prints the answer expected
    printf("= %lf\n", ans);

    return 0;
}