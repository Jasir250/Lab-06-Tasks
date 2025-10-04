/*Keep taking input until user enters 0.*/

#include <stdio.h>


int main() {

    int num;
    printf("Enter 0 to end the program.");
    scanf(" %d", &num);

    while (num != 0){
        printf("Enter 0 to end the program.");
        scanf(" %d", &num);
    }

    return 0;
}
