#include <iostream>


int main(){

    int t;
    std::cin >> t;

    for( int h=0; h<t; h++ ){
        int X;
        int Y;

        std::cin >> X;
        std::cin >> Y;

        // 2 1  a   X
        //        = 
        // 1 2  b   Y
        if( (X == 0) & (Y == 0) ){
            std::cout << "YES" << "\n";
        } else if( (2*X - Y >= 0 ) & (-X + 2*Y >= 0 ) & ((2*X - Y) % 3 == 0 ) & ( (-X + 2*Y) % 3 == 0 ) ){
            std::cout << "YES" << "\n";
        } else {
            std::cout << "NO" << "\n";
        }
    }

    //     while(true){
    //         if( X < 2 | Y < 1){
    //             break;
    //         }
    //         X = X - 2; 
    //         Y = Y - 1;
            
    //         // std::cout << "X: " << X << "\n";
    //         // std::cout << "Y: " << Y << "\n";
    //     }

    //     while(true){
    //         if( X < 1 | Y < 2){
    //             break;
    //         }
    //         X = X - 1;
    //         Y = Y - 2;

    //         // std::cout << "X: " << X << "\n";
    //         // std::cout << "Y: " << Y << "\n";
    //     }

        
    //     if( X == 0 & Y == 0 ){
    //         std::cout << "YES" << "\n";
    //     } else {
    //         std::cout << "NO" << "\n";
    //     }

    // }

    return 0;
}