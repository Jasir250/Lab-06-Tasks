/*Check if a number is palindrome (n=121) using a while loop.*/


#include <stdio.h>

int main() {

    int n= 121, reverse = 0;
    int place_value = 1;
    int num = n, digit;

    while (place_value <= n / 10)
    {
        place_value *= 10;
    }
    

    while (place_value > 0)
    {
        digit = num % 10;
        num = num / 10;
        reverse += digit * place_value;
        place_value /= 10;
    }

    if (reverse == n) {
        printf("%d is a palindrome", n);
    }else{
        printf("%d is NOT a palindrome", n);
    }
    
    return 0;
}
