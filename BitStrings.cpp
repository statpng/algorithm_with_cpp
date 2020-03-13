#include <iostream>

int main(){

    int n;
    std::cin >> n;

    int modulo = 1000000000 + 7;

    long long out = 1;
    long long out2 = 1;
    for( int i=1; i<=n; i++ ){
        out2 *= 2;
        out = (out * 2) % modulo;
        // if( i % 20 == 0 ){
        //     out = (out % modulo) % modulo;
        // }
    }

    std::cout << out % modulo << "\n";
    // std::cout << "out2 : " << out2 % modulo << "\n";

    return 0;
}