#include <iostream>
#include <fstream>
#include <string>
#include <string.h>

using namespace std;

int main(){
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	// std::ios_base::sync_with_stdio(false);
	// std::ifstream cin;
	// cin.open("input.txt");
	// int n;
	// cin >> n;

	std::ifstream InputFile("input.txt");

	int n;
	InputFile >> n;

	int seq[100];
	int count = 0;
	while (InputFile.eof() == false){
		count += 1;
		InputFile >> seq[count];
	}

	for( int i=1; i<=n; i++ ){
		int Include = 0;
		for( int j=1; j<=count; j++ ){
			if( i == seq[j] ){
				Include += 1;
				break;
			}
		}
				
		if( Include == 0 ) std::cout << i << "\n";
	}

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