#include <stdio.h>

int main() {
    int number;

    // TODO: Implement the do-while loop structure for validation
    do {
        printf("Enter a number (1-10): ");
        if(scanf("%d", &number) != 1){
            return 1;
        }
        if(number < 0 || number > 10){
          printf("Error: Value must be 1-10.");
        }

        // TODO: Implement the error message print inside the loop if validation fails

    } while (number < 1 || number > 10);

    printf("Input accepted: %d\n", number);
    return 0;
}
