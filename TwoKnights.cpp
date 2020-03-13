#include <iostream>
#include <fstream>

int main(){
    int n;
    std::cin >> n;

    for( int k=1; k<=n; k++ ){
        unsigned long long sum = 0;
        unsigned long long BadPoint = 0;
        unsigned long long InnerK = std::max(0, k-4);
        unsigned long long OuterK = 0;

        if( k >= 3 ) OuterK += 4*2;
        if( k == 3 ) OuterK += 4*2;
        if( k >= 4 ) OuterK += 4*2*3;
        if( k == 4 ) OuterK += 4*4;
        if( k >= 5 ) OuterK += 4*4;

        BadPoint = (InnerK*InnerK*8 + 4*InnerK*6 + 4*InnerK*4 + OuterK)/2;
        
    //    for( int i=1; i<=k; i++ ){
    //        for( int j=1; j<=k; j++ ){
    //            int BadPoint = 0;
    //            if( i>=3 & i<=k-2 & j>=3 & j<=k-2 ){
    //                BadPoint = 8;
    //            } else {
    //                 if( i>2 & j>1 ) BadPoint += 1;
    //                 if( i>1 & j>2 ) BadPoint += 1;
    //                 if( i<=k-2 & j<=k-1 ) BadPoint += 1;
    //                 if( i<=k-1 & j<=k-2 ) BadPoint += 1;
    //                 if( i<=k-2 & j>1 ) BadPoint += 1;
    //                 if( i<=k-1 & j>2 ) BadPoint += 1;
    //                 if( i>2 & j+1<=k ) BadPoint += 1;
    //                 if( i>1 & j+2<=k ) BadPoint += 1;
    //            }
                
                // std::cout << "BadPoint :" << BadPoint << "\n";
                sum += ((long long)k*k)*((long long)k*k-1)/2 - BadPoint;
    //        }
    //    }
        printf("%llu\n", sum);
        // std::cout << sum << "\n";
    }

    return 0;
}