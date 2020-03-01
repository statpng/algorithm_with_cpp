// #include <stdio.h>
#include <iostream>

int main(){
    long long number; std::cin >> number;
    while( true ){
        printf("%lld ", number);

        if( number == 1 ) break;
        if( number % 2 == 0 ){
            number = number/2;
        } else if (number % 2 == 1) {
            number = 3*number+1;
        }
    }

    return 0;
}