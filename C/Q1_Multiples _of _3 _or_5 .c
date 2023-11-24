/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000 */

#include <stdio.h>

int main() {

    int sum = 0;
    int num = 0;

    printf("The list of natural numbers below 1000 that are multiplise of 3 or 5:\n\n%d ", num);

    for (num = 0; num < 1000; num++) {
        
        if (num % 3 == 0 || num % 5 == 0) {

            printf("%d\n", num);
            
        }

        sum = sum + num;
    }

    printf("The sum is: %d\n", sum);

    return 0;
}