#include <iostream>
#include <fstream>


int main(){

    // std::ifstream InputFile("input.txt");
	// int n;
	// InputFile >> n;
    // int seq[n];

	// int count = 0;
	// while (InputFile.eof() == false){
	// 	InputFile >> seq[count];
	// 	count += 1;
	// }

    int n; std::cin >> n;
	int count = 0;
    int seq[n];

	while (std::cin.eof() == false){
		std::cin >> seq[count];
		count += 1;
		// std::cout << seq[count] << "\n";
	}

    // for( int j=0; j<n; j++ ){
    //     std::cout << "seq[j] :"<< seq[j] << "\n";
    // }

    long long turn = 0;
    long long diff;
    for( int i=1; i<n; i++ ){
        long long pre = seq[i-1];
        long long next = seq[i];
        // std::cout << "next" << next << "\n";
        // std::cout << "pre" << pre << "\n";
        if( next < pre ){
            diff = pre - next;
            
            seq[i] = pre;
            // std::cout << "diff: " << diff << "\n";
            // std::cout << "turn: " << turn << "\n";
            turn = std::abs(turn) + std::abs(diff);
        }
    }

    // for( int i=1; i<n; i++ ){
    //     std::cout << seq[i] << "\n";
    // }

    std::cout << turn << "\n";

    return 0;
}