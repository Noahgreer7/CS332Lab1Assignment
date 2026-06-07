#include <stdio.h>

int main() {

    /* Define an integer variable */
    int given_number;

    /* Ask the user to type a number, then read it with scanf */
    printf("Enter a number: ");
    scanf("%d", &given_number);

    /* Check if the number is prime or not prime */

    /* Numbers less than 2 are never prime */
    if (given_number < 2) {

        printf("The number is not prime\n");

    } else {

        /* assume it is prime until find a reason it is not */
        int is_prime = 1;  /* 1 means true */
        int i;             /* This is counter for the loop  */

        /* Check if any number from 2 up to given_number-1 divides evenly */
        /* If any number divides evenly, it is nit prime                   */
        for (i = 2; i < given_number; i++) {

            if (given_number % i == 0) {  /* % gives the remainder */
                is_prime = 0;             /* 0 means false */
            }

        }

        /* Step 4: Print the result */
        if (is_prime == 1) {
            printf("The number is prime\n");
        } else {
            printf("The number is not prime\n");
        }

    }

    return 0;
}