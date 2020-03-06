#include <fstream>
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <typeinfo>

using namespace std;

int main(){

	int seq_full[2*100000];
	
	// std::ifstream InputFile("test_input.txt");
	// int n;
	// InputFile >> n;

	// int count = 0;
	// while (InputFile.eof() == false){
	// 	InputFile >> seq_full[count];
	// 	count += 1;
	// }
	
    int n; std::cin >> n;
	int count = 0;
	while (std::cin.eof() == false){
		std::cin >> seq_full[count];
		count += 1;
		// std::cout << seq[count] << "\n";
	}

	
	int seq[n-1];
	for( int h=0; h<n-1; h++){
		seq[h] = seq_full[h];
	}

	std::sort(seq, seq+n-1 );


	// for( int i=0; i<n-1; i++ ){
	// 	std::cout << seq[i] << "\n";
	// }

	for( int j=0; j<n; j++ ){
		// std::cout << "j is " << j+1 << "\n";
		// std::cout << "seq[j] is " << seq[j] << "\n";

		// std::cout << "type of j : " << typeid(j).name() << "\n";
		// std::cout << "type of seq[j] : " << typeid(seq[j]).name() << "\n";
		// std::cout << "diff:" << std::abs(seq[j-1] - seq[j]) << "\n";

		// if( std::abs( seq[j-1] - seq[j] ) > 1 ){
		// 	std::cout << j << "\n";
		// }

		if( std::abs( j+1 - seq[j] ) > 0 ){
			// std::cout << "j is " << j+1 << "\n";
			// std::cout << "seq[j] is " << seq[j] << "\n";

			std::cout << j+1 << "\n";
			// std::cout << "seq[j]:" << seq[j] << "\n";
			// std::cout << "seq[j+1]:" << seq[j] << "\n";
			break;
		}

		// if( std::abs( seq[j-1] - seq[j] ) > 1 ) break;
	}


	// for( i=1; i<=n; i++ ){
	// 	int Include = 0;
	// 	for( int j=1; j<=count; j++ ){
	// 		if( i == seq[j] ){
	// 			Include += 1;
	// 			break;
	// 		}
	// 	}
				
	// 	if( Include == 0 ) std::cout << i << "\n";
	// }

	// for( int i=0; i<100; ++i ){
	// 	InputFile >> seq[i];
	// 	// std::cout << seq[i] << "\n";
	// }

	// std::cout << seq[1] << "\n";
	
	// InputFile.getline(n, 100);

	// char InputString[100];
	// InputFile.getline(InputString, 100);

	// std::cout << n[0] << "\n";
	// for( int i=0; i< n[0]; ++i ){
	// 	printf("%d", i);
	// }

	// std::cout << n << "\n";
	// std::cout << InputString << "\n";

	//////////////////////////////////////////////////
	// std::string str[100];

	// for(int i=0; i<100; ++i){
	// 	getline(cin, str[i]);
	// }

	// for(int j=0; j<100; ++j){
	// 	std::cout << str[j] << "\n";
	// }
	//////////////////////////////////////////////////

	//////////////////////////////////////////////////
	// while(!InputFile.eof()){
	// 	InputFile.getline(InputString, 256);
	// 	std::cout << InputString << "\n";
	// }
	//////////////////////////////////////////////////


	//////////////////////////////////////////////////
	// char* result = strtok(InputString, "");
	// printf("%s\n", result);
	// std::cout << inputfile << "\n";
	// std::getline( inputfile, n);
	// std::getline( inputfile, seq);
	//////////////////////////////////////////////////



	
	return 0;
	
}
