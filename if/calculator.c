#include <stdio.h>

// The main function of our code
int main(void) {

    // Declaring the variables needed for our code to function
    int val_1;
    int val_2;
    int ans = 0;
    char operation;

    // Asks for and then assigns a value to our
    printf("Write your equation: x <operation> y\n");
    scanf("%d %c %d", &val_1, &operation, &val_2);
    
    // If statements to count with
    if (operation == '+') {
        ans = val_1 + val_2;
    } else if (operation == '-') {
        ans = val_1 - val_2;
    } else if (operation == '*') {
        ans = val_1 * val_2;
    } else if (operation == '/') {
        ans = val_1 / val_2;
    } else {
        printf("Operator was invalid\n");
    }

    // Prints the answer expected
    printf("= %d\n", ans);

    return 0;
}