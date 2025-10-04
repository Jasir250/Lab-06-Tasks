/*Print multiplication table of a number entered by user.*/

#include <stdio.h>

int main() {

    int num;
    printf("Enter a number. ");
    scanf(" %d", &num);

    for (int i = 1 ;i <= num;){

        printf("%d * %d = %d\n", num, i, num * i);
        i += 1;
    }
    return 0;
}