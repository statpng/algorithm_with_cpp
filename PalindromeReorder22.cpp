#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
#include <iterator>
 
// CBPPBFCFAA
int main(){
    int n;
    std::vector<char> InputStrings;
    // std::vector<char> InputStrings {"A", "A", "B", "B", "C", "D", "D"};
    char INPUT;
    while (std::cin >> INPUT){
        InputStrings.push_back(INPUT);
        // InputStrings[n] = INPUT;
        n += 1;
	}

    std::map<char, int> AlphabetCount;
    std::map<char, int>::iterator j;

    for( auto & elem : InputStrings){
        auto result = AlphabetCount.insert(std::pair<char, int>(elem, 1));
        if( result.second == false ){
            result.first -> second ++;
        }
    }

    // std::cout << "---------------" << "\n";

    int SumOfOdds=0;
    for( j=AlphabetCount.begin(); j!=AlphabetCount.end(); j++ ){
        SumOfOdds += ( (j -> second % 2 == 1));
    }

    if( SumOfOdds > 1 ){
        std::cout << "NO SOLUTION" << "\n";
    } else {
        // std::cout << "---------------" << "\n";

        std::vector<int> counts;
        for( j=AlphabetCount.begin(); j!=AlphabetCount.end(); j++ ){
            if( j-> second % 2 == 0 ){
                for( int i=0; i<(j -> second)/2; i++ ){
                    std::cout << j-> first ;
                }
            }
        }


        for( j=AlphabetCount.begin(); j!=AlphabetCount.end(); j++ ){
            if( j-> second % 2 == 1 ){
                for( int i=0; i<(j -> second); i++ ){
                    std::cout << j-> first ;
                }
            }
        }

        std::map<char, int>::reverse_iterator k;
        for( k=AlphabetCount.rbegin(); k!=AlphabetCount.rend(); ++k ){
            if( k-> second % 2 == 0 ){
                for( int i=0; i<(k -> second)/2; i++ ){
                    std::cout << k-> first ;
                }
            }
        }


    }
    
}