#include <iostream>

int main(){
    int n = 0;
    std::string who = "cat";

    std::cout << n << "\n";

    // std::cout << "I am a " << who << "\n";

    std::printf("I am a %s \n", who.c_str());
    
    return 0;
}

