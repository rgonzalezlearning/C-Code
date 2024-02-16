#include <stdio.h>

int main() {
    int total = 0; // variable to store the sum of numbers
    int count = 0; // variable to keep track of the number of inputs
    int number;    // variable to store the input number

    printf("Enter numbers (enter -1 to stop):\n");

    // Loop until -1 is entered
    while (number != -1) {
        printf("Enter a number: ");
        scanf("%d", &number);

        // Add the number to the total if it's not -1
        if (number != -1) {
            total += number;
            count++;
        }
    }

    // Calculate and display the average
    if (count > 0) {
        double average = (double)total / count;
        printf("Average: %.2f\n", average);
    } else {
        printf("No numbers entered.\n");
    }

    return 0;
}
