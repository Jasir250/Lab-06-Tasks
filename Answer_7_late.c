/*Print Fibonacci series up to 10 terms using a for loop.*/

#include <stdio.h>

int main() {

    int num = 0, num_2 = 1, next_num;

    printf("Term 1: %d \nTerm 2: %d \n", num, num_2);

    for (int counter = 3; counter <= 10;){
        next_num = num + num_2;
        printf("Term %d: %d\n",counter, next_num);
        num = num_2;
        num_2 = next_num;
        counter++;
    }
    
    return 0;
}
