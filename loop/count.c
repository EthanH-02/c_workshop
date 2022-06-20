#include <stdio.h>

int main(void) {

    int number;
    int counter = 0;
    printf("Please enter a number to count to: ");
    scanf("%d", &number);

    while (counter <= number) {
        printf("%d\n", counter);
        counter += 1;
    }

    return 0;
}