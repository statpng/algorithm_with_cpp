# Review on the book of algorithm training

## Compilation

``` c++
g++ -std=c++11 -02 -Wall test.cpp -o test
```

- This command generates "test" executable file by compiling source code "test.cpp".
- Compiler follows C++ standard(-std=c++11), optimize the code(-02), and display warnings about errors(-Wall)



## Input and output

- C++ standard stream : *cin* and *cout*
- You can use *scanf* and *printf* as in C language


## Data type

- integer 
- `long long x = 123456789123456789LL;`
- Wrong case  
  ```c++
  int a = 123456789;  
  long long b = a * a;  
  cout << b << "\n"; // -1757895751
  ```

- Correct
    ```c++
    long long b = (long long) a * a;
    ```
    
- long : 32 bit  (-2*10^9 ~ 2*10^9)
- long long : 64 bit  (-2^63 ~ 2^63-1)
- __int128_t : 128 bit  (-2^127 ~ 2^127-1)

- *long long* is sufficient to most of problem in challenges 


- Modulo (remainder)
    - > (*a*+*b*) mod *m* = (*a* mod *m* + *b* mod *m*) mod *m*
    - > (*a*-*b*) mod *m* = (*a* mod *m* - *b* mod *m*) mod *m*
    - > (*a***b*) mod *m* = (*a* mod *m* * *b* mod *m*) mod *m*
    - i.e. *n!* mod *m* = (((*n* mod *m*) * *n-1* mod *m*) * ... * *1* mod *m*) mod *m*
      ```
      long long x = 1;
      int n = 100;
      for(int i = 1; i <= n; i++){
          x = (x*i)%m;
      }
      cout << x << "\n";

## Floating point
- double : 64bit
- long double : 80bit

- Incorrect case
``` c++
double x = 0.3 * 3 + 0.1;  // this should be equalt to 1, but  
printf("%.20f \n", x);   // 0.99999999999999988898
if( x == 1 ) printf("%s", "This is wrong");
```

- Correction
```c++
// Instead, you have to use the epsilon method
if( abs(x - 1) < 1e-9 ) printf("%s", "x is equal to 1");
```


## To make your code shorter

- `typedef`  
```c++
long long a = 123456789;
long long b = 987654321;
cout << a*b << "\n";
```  
```c++
typedef long long ll;
ll a = 123456789;
ll b = 987654321;
cout << a*b << "\n";
```
$\rightarrow$
```c++
typedef vector<int> vi;
typedef pair<int,int> pi;
```

- macro


```c++
v.push_back(make_pair(y1, x1));
v.push_back(make_pair(y2, x2));
int d = v[i].first + v[i].second;
```
$\rightarrow$
```c++
#define F first
#define S second
#define PB push back

v.PB(make_pair(y1, x1));
v.PB(make_pair(y2, x2));
int d = v[i].F + v[i].S;
```

```c++
for( int i = 1; i <=n; i++ ){
    search(i);
}
```
$\rightarrow$
```c++
#define REP(i, a, b) for (int i = a; i <=b; i++)
REP(i, 1, n){
    search(i);
}
```

## 2.2 Recursive Algorithm

### 2.2.1 subset

- `search` using the following object `vector<int> subset;`
```c++
void search(int k){
    if (k == n+1){
        \\ deal with subsets
    } else {
        \\ include k into the subset
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
        \\ do not include k into the subset
        search(k+1);
    }
}
```



