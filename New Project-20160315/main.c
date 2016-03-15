#include <stdio.h>

int ask_in_range(int min, int max) {
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    printf("%d\n", num);
    if (num > min && num < max) {
        printf("Your number is within the range.");
        return num;
    }
    else {
        while (num < min || num > max) {
            printf("Please enter a number within the [%d, %d] range: ", min, max);
            scanf("%d", &num);
        }
    }
}

int main(void) {
    ask_in_range(0,10);
    return 0;
}