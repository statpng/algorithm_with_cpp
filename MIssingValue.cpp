#include <fstream>
#include <iostream>
#include <bits/stdc++.h>
#include <valarray>

using namespace std;

int main(){

	std::ifstream InputFile("input.txt");

	int n;
	InputFile >> n;

	int seq_full[100];
	int count = 0;
	while (InputFile.eof() == false){
		count += 1;
		InputFile >> seq_full[count];
	}

	int seq[count];
	for( int h=1; h<+count; h++){
		seq[h] = seq_full[h];
	}

    // int n; std::cin >> n;
	// int seq[100];
	// int count = 0;
	// while (std::cin.eof() == false){
	// 	count += 1;
	// 	std::cin >> seq[count];
	// 	// std::cout << seq[count] << "\n";
	// }

	std::sort(seq, seq+sizeof(seq)/sizeof(seq[0]) );

	for( int i=1; i<=sizeof(seq)/sizeof(seq[0]); i++ ){
		std::cout << seq[i] << "\n";
	}

	// for( i=1; i<=n; i++ ){
	// 	int Include = 0;
	// 	for( int j=1; j<=count; j++ ){
	// 		if( i == seq[j] ){
	// 			Include += 1;
	// 			break;
	// 		}
	// 	}
				
	// 	if( Include == 0 ) std::cout << i << "\n";
	// }

	// for( int i=0; i<100; ++i ){
	// 	InputFile >> seq[i];
	// 	// std::cout << seq[i] << "\n";
	// }

	// std::cout << seq[1] << "\n";
	
	// InputFile.getline(n, 100);

	// char InputString[100];
	// InputFile.getline(InputString, 100);

	// std::cout << n[0] << "\n";
	// for( int i=0; i< n[0]; ++i ){
	// 	printf("%d", i);
	// }

	// std::cout << n << "\n";
	// std::cout << InputString << "\n";

	//////////////////////////////////////////////////
	// std::string str[100];

	// for(int i=0; i<100; ++i){
	// 	getline(cin, str[i]);
	// }

	// for(int j=0; j<100; ++j){
	// 	std::cout << str[j] << "\n";
	// }
	//////////////////////////////////////////////////

	//////////////////////////////////////////////////
	// while(!InputFile.eof()){
	// 	InputFile.getline(InputString, 256);
	// 	std::cout << InputString << "\n";
	// }
	//////////////////////////////////////////////////


	//////////////////////////////////////////////////
	// char* result = strtok(InputString, "");
	// printf("%s\n", result);
	// std::cout << inputfile << "\n";
	// std::getline( inputfile, n);
	// std::getline( inputfile, seq);
	//////////////////////////////////////////////////



	
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


