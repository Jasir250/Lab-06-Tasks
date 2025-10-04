/*Print numbers from 10 down to 1 using a for loop.*/

#include <stdio.h>

int main(){

    for (int i = 10; i > 0;){
        printf("%d\n", i);
        i -= 1;
    }

    return 0;
}