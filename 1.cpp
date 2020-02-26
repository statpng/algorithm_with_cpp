#include <stdio.h>

int main(){
    int number = 3;
    int count = 0;
    while( true ){
        printf("%d \n", number);

        if( number == 1 ) break;
        if( number % 2 == 0 ){
            number = number/2;
        } else if (number % 2 == 1) {
            number = 3*number+1;
        }
    }

    return 0;
}