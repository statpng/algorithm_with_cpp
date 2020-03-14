#include <iostream>
#include <fstream>


int main(){

    // char* InputString[10];

    char InputString_full [1000000];

    // std::ifstream InputFile("input.txt");
    // std::getline(std::cin, InputString);
    
    // cin.getline(InputString, 1000000);
    int i_Input = 0;
	while (std::cin.eof() == false){
		std::cin >> InputString_full[i_Input];
        i_Input += 1;
	}

    char InputString[i_Input];
    for( int j=0; j<i_Input; j++ ){
        InputString[j] = InputString_full[j];
    }

	// int i_Input = 0;
	// while (std::cin.eof() == false){
    //     std::cin >> InputString[i_Input];
    //     i_Input += 1;
	// }


    int n = sizeof(InputString) / sizeof(InputString[0]);

    int tmp = 1;
    int out = 1;
    for( int i=0; i<n; i++ ){
        // std::cout << InputString[i-1] << "\n";
        if( InputString[i-1] == InputString[i] ){
            tmp += 1;
        } else {
            tmp = 1;
        }

        if( tmp > out ){
            out = tmp;
        }
    }

    std::cout << out << "\n";
    
    return 0;

}