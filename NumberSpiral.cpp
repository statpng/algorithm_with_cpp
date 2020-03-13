#include <iostream>
#include <fstream>
#include <math.h>


int main(){
    

    // std::ifstream InputFile("input.txt");
	// int t;
	// InputFile >> t;

    int t;
    std::cin >> t;

    long long y, x, out, diag, MAX;

	for( int i=0; i<t; i++){
		std::cin >> x;
        std::cin >> y;

        MAX = std::max(x, y);

        diag = MAX*MAX - MAX + 1;

        if( MAX % 2 == 0 ){
            out = diag + (x-y);
        } else {
            out = diag - (x-y);
        }
        
        // std::cout << MAX << "\n";
        // std::cout << MIN << "\n";

        std::cout << out << "\n";

	}
    

    return 0;
}