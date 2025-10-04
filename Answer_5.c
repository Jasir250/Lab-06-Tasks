/*Find the factorial of a number (n=5) using a for loop.*/

#include <stdio.h>

int main() {

    int factorial = 1, n = 5;

    for (int i = n; i >= 1;){
        
        factorial *= i; 

        i -= 1;
    }
    printf("The factorial of %d is %d", n, factorial);


    return 0;
}