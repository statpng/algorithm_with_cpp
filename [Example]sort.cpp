#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int arr[5];
    arr[0] = 0;
    arr[1] = 4;
    arr[2] = 3;
    arr[3] = 1;
    arr[4] = 5;
    sort(arr, arr + 5);

    for (int i = 0; i < 5; i++)
        cout << arr[i] << endl;

    return 0;
}