#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
const int NumberOfAlphabets = 27;

int countDistinct(char arr[], int n) 
{ 
    int res = 1; 
  
    // Pick all elements one by one 
    for (int i = 1; i < n; i++) { 
        int j = 0; 
        for (j = 0; j < i; j++) 
            if (arr[i] == arr[j]) 
                break; 
  
        // If not printed earlier, then print it 
        if (i == j) 
            res++; 
    } 
    return res; 
} 


// AAAACACBA
int main(){

    int n=0;
    char INPUT;
    char InputString[1000*1000];

    // std::vector<char> InputString;
    while (std::cin >> INPUT){
        // InputString.push_back(INPUT);
        InputString[n] = INPUT;
        n += 1;
	}

    // std::sort( InputString.begin(), InputString.end() );

    for( int i=0; i<n; i++ ){
        std::cout << InputString[i];
    }


    std::cout << "\n" << countDistinct( InputString, n ) << "\n";


    // std::vector <std::string> UniqueWords = InputString.erase( std::unique(InputString.begin(), InputString.end()), InputString.end() );

    // for( int i=0; i<InputString.size(); i++ ){
    //     std::cout << UniqueWords[i];
    // }
    





    // std::cout << std::count(InputString.begin(), InputString.end(), "A") << "\n";

    // std::string arr[3];
    // for(int i=0; i<3; i++){
    //     std::getline(cin, arr[i]);
    // }





    // std::vector<std::string> InputString;
    // std::string INPUT;

    // while (std::cin >> INPUT){
    //     InputString.push_back(INPUT);
    // }

    // std::count(InputString.begin(), InputString.end(), "A")

    // std::cout << std::count(InputString.begin(), InputString.end(), "A") << "\n";
    
    // std::cout << "NO SOLUTION" << "\n";


    
    return 0;
}