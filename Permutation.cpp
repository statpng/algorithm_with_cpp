#include <iostream>

int main(){
    int n;
    std::cin >> n;

    int count = 0;
    int i = 0;
    if( n == 1){
        printf("%d", 1);
    } else if( 1 < n && n < 4 ){
        std:printf("%s", "NO SOLUTION");
    } else {
        while( count < n){
            count+=1;
            int N;

            if( n%2 == 0 ){
                N = n/2;
            } else {
                N = (n-1)/2;
            }

            i += 1;
            if( i <= N ){
                std::printf("%d ", 2*i);
            } else {
                std::printf("%d ", 2*(i-N)-1);
            }
        }
    }

    return 0;
}