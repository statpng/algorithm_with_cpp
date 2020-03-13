#include <iostream>
#include <chrono>
#include <math.h>


int main(){
    // std::chrono::system_clock::time_point start = std::chrono::system_clock::now();


    int n;
    std::cin >> n;
    int power, power_2, power_5;
    bool Condition;

    int count_5=0, count_2=0;
    for( int k=1; k<=n; k++ ){
        if( k % 2 == 0 | k % 5 == 0 ){
            int i = k;

            // Condition = true;
            // while(Condition){
            //     if( (i % 2) > 0 & (i % 5) > 0 ){
            //         Condition = false;
            //     } else {

            //         power = 2;
            //         power = 1;
            //         power_2 = (int) std::pow(2, power);
            //         power_5 = (int) std::pow(5, power);
            //         if( (i % (int)power_2) == 0 ){
            //             count_2 += power;
            //             i = i/power_2;
            //         }

            //         if( (i % power_5) == 0 ){
            //             count_5 += power;
            //             i = i/power_5;
            //         }
            //     }
            //     // std::cout << i << "\n";
            // }

            Condition = true;
            power = 10;
            power_2 = (int) std::pow(2, power);
            power_5 = (int) std::pow(5, power);
            while(Condition){
                if( (i % power_2) > 0 & (i % power_5) > 0 ){
                    Condition = false;
                } else {
                    if( (i % power_2) == 0 ){
                        count_2 += power;
                        i = i/power_2;
                    }

                    if( (i % power_5) == 0 ){
                        count_5 += power;
                        i = i/power_5;
                    }
                }
                // std::cout << i << "\n";
            }


            Condition = true;
            power = 5;
            power_2 = (int) std::pow(2, power);
            power_5 = (int) std::pow(5, power);
            while(Condition){
                if( (i % power_2) > 0 & (i % power_5) > 0 ){
                    Condition = false;
                } else {
                    if( (i % power_2) == 0 ){
                        count_2 += power;
                        i = i/power_2;
                    }

                    if( (i % power_5) == 0 ){
                        count_5 += power;
                        i = i/power_5;
                    }
                }
                // std::cout << i << "\n";
            }


            Condition = true;
            power = 1;
            power_2 = (int) std::pow(2, power);
            power_5 = (int) std::pow(5, power);
            while(Condition){
                if( (i % power_2) > 0 & (i % power_5) > 0 ){
                    Condition = false;
                } else {
                    if( (i % power_2) == 0 ){
                        count_2 += power;
                        i = i/power_2;
                    }

                    if( (i % power_5) == 0 ){
                        count_5 += power;
                        i = i/power_5;
                    }
                }
                // std::cout << i << "\n";
            }
        } else {

        }
        
    }
    
    std::cout << std::min( count_2, count_5 ) << "\n";


    // std::chrono::duration<double> sec = std::chrono::system_clock::now() - start;
    // std::cout << "Time difference : " << sec.count() << " seconds" << std::endl;

    return 0;
}