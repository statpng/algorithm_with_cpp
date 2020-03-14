#include <iostream>
#include <chrono>
#include <math.h>
 
 
int main(){
    // std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
    int n;
    std::cin >> n;
 
    int out = 0;
    for( int i=1; i<=13; i++ ){
        out += n / (int) std::pow(5, i);
    }
 
    std::cout << out << "\n";
 
 
    // std::chrono::duration<double> sec = std::chrono::system_clock::now() - start;
    // std::cout << "Time difference : " << sec.count() << " seconds" << std::endl;
 
    return 0;
}