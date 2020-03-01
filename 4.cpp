#include <iostream>
#include <vector>

int n = 3;
std::vector<int> permutation;
bool chosen[6];

void perm(){    
    if( permutation.size() == n ){
        for(int i=0; i<permutation.size(); i++){
            std::cout << permutation.at(i);
        }
    } else {
        for(int i=1; i<=n; i++){
            if(chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            perm();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main(){
    perm();
    for(int i=0; i<permutation.size(); i++){
        std::cout << permutation.at(i);
    }
    return 0;
}