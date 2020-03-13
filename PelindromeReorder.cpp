#include <iostream>
// AAAACACBA
int main(){


    int seq_full[2*100000];	
    int n; std::cin >> n;
	int count = 0;
	while (std::cin.eof() == false){
		std::cin >> seq_full[count];
		count += 1;
	}


    std::sort(seq, seq + n-1 );

    

    std::cout << "NO SOLUTION" << "\n";


    
    return 0;
}