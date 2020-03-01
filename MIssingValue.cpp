#include <iostream>
#include <fstream>
#include <string>

int main(){
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	// std::ios_base::sync_with_stdio(false);
	// std::ifstream cin;
	// cin.open("input.txt");
	// int n;
	// cin >> n;

	int n;
	std::string seq;
	std::ifstream inputfile ("input.txt");
	std::getline( inputfile, n);
	std::getline( inputfile, seq);

	// int nn = n;
	// std::printf("%d", 5*nn);
	// std::printf("%s", seq);

	return 0;
	
}


// int main(){
//     int a, b;
//     std::string x;

//     std::cin >> a >> b >> x;
//     std::cout << a << " " << b << " " << x << "\n";

//     return 0;
// }





// Using sync_with_stdio to improve computing time

// #include <iostream>
// int main(){
//     int a, b;
//     std::string x;

//     std::ios::sync_with_stdio(0);
//     // scanf, printf와 같은 C 표준 입출력 함수와 cout, cin같은 C++ 입출력 객체를 섞어 사용하는 경우 오답처리가 날 수 있습니다
//     std::cin.tie(0);

//     // std::cin >> a >> b >> x;
//     // std::cout << a << " " << b << " " << x << "\n";

//     std::scanf("%d %d", &a, &b);
//     std::printf("%d %d\n", a, b);

//     return 0;
// }




// Read a whole line with null spaces

// #include <iostream>
// #include <stdio.h>
// int main(){
    
//     std::string x;
//     // string s;
//     // std::getline(cin, s);

//     while(std::cin >> x){
//         std::cout << x << std::endl;
//     }

//     return 0;
// }




// Save a sequence of 1:10 into output.txt

// #include <stdio.h>

// int main(){
//     // freopen("output.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);

//     for(int i=0; i<10; ++i){
//         printf("%d \n", i);
//     }

//     return 0;
// }





// Read a text file and print context of them

// #include <stdio.h>

// int main(){
//     char ch[100];
//     stdin = freopen("input.txt", "r", stdin);
//     printf("File content is--\n");
// 	printf("\n...............print the strings..............\n\n");
// 	while(!feof(stdin)){
// 		//takes the first 100 character in the character array 
// 		fgets(ch,100,stdin);
// 		//and print the strings
// 		printf("%s",ch);
// 	}
	    
//     return 0;
// }


