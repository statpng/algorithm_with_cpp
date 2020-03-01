#include <vector>
#include <iostream>

std::vector<int> subset;

void print(std::vector<int> const &input)
{
	for (int i = 0; i < input.size(); i++) {
		std::cout << input.at(i) << "";
	}
}


void search(int k){
    int n = 4;

    if( k == n+1 ){
        std::cout << "{";
        print(subset);
        std::cout << "}\n";
    } else {
        subset.push_back(k);
        search(k + 1);
        subset.pop_back();
        search(k + 1);
    }
}


int main(){
    search(1);
    return 0;
}


