#include <stdio.h>

int main(void) {

    int val_1;
    int val_2;
    int sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &val_1, &val_2);

    int sum = val_1 + val_2;

    printf("The sum of %d and %d is %d", val_1, val_2, sum);

    return 0;
}