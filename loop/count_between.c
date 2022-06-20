#include <stdio.h>

int main(void) {

    int start;
    int end;
    printf("Please enter two numbers to count between: ");
    scanf("%d %d", &start, &end);

    while (start <= end) {
        printf("%d\n", start);
        start += 1;
    }

    return 0;
}