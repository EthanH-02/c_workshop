#include <stdio.h>

int main(void) {

    int start;
    int end;
    int interval;

    printf("Please enter two numbers to count between: ");
    scanf("%d %d", &start, &end);
    printf("Please enter an interval to count by: ");
    scanf("%d", &interval);

    while (start <= end) {
        printf("%d\n", start);
        start += interval;
    }

    return 0;
}