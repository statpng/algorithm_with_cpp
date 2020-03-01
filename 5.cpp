#include <iostream>
#include <bitset> // for "bitset" type

int main(){
    int x = 0;   //
    x |= (1<<1); // add a zero to the right 
    x |= (1<<3); // add three zero bit to the right and union this with the above x
    x |= (1<<4); 
    x |= (1<<8);

    std::cout << "A value containing the information of set is " << x << "\n";

    for(int i=0; i<32; i++){
        if( x & (1<<i) ) std::cout << "Elements of set are " << i << "\n";
    }

    std::cout << "The cardinality of the set is " << __builtin_popcount(x) << "\n";

    int a = (1<<1)|(1<<3)|(1<<4)|(1<<8);
    int b = (1<<3)|(1<<6)|(1<<8)|(1<<9);
    int c = a|b;
    std::cout << __builtin_popcount(c) << "\n";

    std::cout << "Print the subset containing k elements among the power set of {1, 2, ..., n-1}." << "\n";
    
    int n=6;
    int k=4;
    if( k > n ) std::cout << "k has to be equal or less than n";
    for( int i=0; i < (1<<n); i++){
        if( __builtin_popcount(i) == k ){
            std::cout << i << "\n";
            for( int j=0; j<32; j++ ){
                if( i & (1<<j) ) std::cout << j;
            }
            std::cout << "\n";
        }
    }



    std::cout << "------------" << "\n";
    std::cout << "C++ bitset standard library" << "\n";

    std::bitset<10> s;
    s[1] = 1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;
    std::cout << s[4] << "\n";
    std::cout << s[5] << "\n";

    std::cout << s.count() << "\n";

    std::bitset<10> u, v;
    u[1] = 1;  v[1] = 1;
    u[3] = 1;  v[2] = 1;
    u[4] = 1;  v[3] = 1;
    u[7] = 1;  v[4] = 1;

    std::bitset<10> e = u & v;
    std::bitset<10> f = u | v;
    std::bitset<10> g = u ^ v;

    std::cout << "u:" << u << "\n";
    std::cout << "v:" << v << "\n";
    std::cout << "------------" << "\n";
    std::cout << "e:" << e << "\n";
    std::cout << "f:" << f << "\n";
    std::cout << "g:" << e << "\n";

}
