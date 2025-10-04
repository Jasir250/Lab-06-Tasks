/*Check if a number is prime (n=7) using a for loop.*/

#include <stdio.h>

int main() {

    int n = 7, prime = 1;

    for (int i = n - 1; i > 1;){

        if (n % i == 0)
        {
            prime = 0;
        }
        i -= 1;    
    }

    if (prime == 1)
    {
        printf("%d is a prime number.", n);       
    }else
    {
        printf("%d is not a prime number.", n);
    }


    return 0;
}