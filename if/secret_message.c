#include <stdio.h>

int main(void) {
    
    int input;
    printf("Enter your favourite number: ");
    scanf("%d", &input);

    if (input == 37) {
        printf("CONGRATULATIONS - YOU FOUND THE SECRET NUMBER\n");
    }

    printf("Thank you for your input\n");

    return 0;
}