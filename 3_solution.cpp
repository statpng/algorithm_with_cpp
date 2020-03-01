#include <vector>
#include <iostream>

using namespace std;


void print(std::vector<int> const &input)
{
	for (int i = 0; i < input.size(); i++) {
		std::cout << input.at(i) << ' ';
	}
}


class Subset{
public:
    Subset();
    vector<int> subset;
    void search(int k);
};

Subset::Subset(){
    search(1);
};

void Subset::search(int k){
    int n = 3;
    if (k == n+1)
    {
        // 부분집합을 처리한다.
    }
    else
    {
        // k를 부분집합에 포함시킨다.
        subset.push_back(k);
        search(k+1);

        // k를 부분집합에 포함시키지 않는다.
        subset.pop_back();
        search(k+1);
    }
};

int main()
{
    Subset subset = Subset();

    std::cout << subset;

    // for( int i = 0; i < subset.size(); i++ ){
    //     std::cout << subset.at(i) << std::endl;
    // }
}