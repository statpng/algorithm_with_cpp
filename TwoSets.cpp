#include <iostream>
#include <fstream>

int main(){
    int n;
    std::string YESorNO = "NO";
    std::cin >> n;

    int sum=0;
    for( int i=1; i<=n; i++ ){
        sum += i;
    }

    int HalfOfSum;
    if( sum % 2 == 0 ){
        
        std::cout << "YES" << "\n";

        HalfOfSum = sum/2;

        bool Condition = true;
        // while(Condition){
            int k1 = n/2 + n%2;
            int k2 = n/2;
            
            int sum1 = (k1*k1);
            int sum2 = (k2*k2+k2);

            int abs_diff_sum = std::abs( sum1 - sum2 );
            int SIGN_sum1Msum2;

            if( sum1 > sum2 ){
                SIGN_sum1Msum2 = +1;

                std::cout << k1 << "\n";
                for( int i1=1; i1<=k1; i1++ ){
                    if( i1 > 1 & i1 <= abs_diff_sum/2+1 ){
                        std::cout << 2*i1-1 - SIGN_sum1Msum2 << " ";
                    } else {
                        std::cout << 2*i1-1 << " ";
                    }
                }

                std::cout << "\n" << k2 << "\n";
                for( int i2=1; i2<=k2; i2++ ){
                    if( i2 <= abs_diff_sum/2 ){
                        std::cout << 2*i2 + SIGN_sum1Msum2 << " ";
                    } else {
                        std::cout << 2*i2 << " ";
                    }
                }
            } else {
                SIGN_sum1Msum2 = -1;

                std::cout << k1 << "\n";
                for( int i1=1; i1<=k1; i1++ ){
                    if( i1 > 1 & i1 <= abs_diff_sum/2 +1 ){
                        std::cout << 2*i1-1 - SIGN_sum1Msum2 << " ";
                    } else {
                        std::cout << 2*i1-1 << " ";
                    }
                }

                std::cout << "\n" << k2 << "\n";
                for( int i2=1; i2<=k2; i2++ ){
                    if( i2 > 1 & i2 <= abs_diff_sum/2 +1 ){
                        std::cout << 2*i2 + SIGN_sum1Msum2 << " ";
                    } else {
                        std::cout << 2*i2 << " ";
                    }
                }
            }
            

            // 1 3 5 7 
            // 2 4 6
            

            // for( int j=1; j<=n; j++ ){
            //     std::cout << j << "\n";
            //     if( j == n ) Condition = false;
            // }
        // }

    } else {
        std::cout << "NO" << "\n";
    }

    return 0;
}