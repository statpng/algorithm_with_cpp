#include <stdafx.h>
#define MY_LOCAL_TEST  
  
#include <stdio.h>  
  
int main(void) {  
  int N;  
  
#ifdef MY_LOCAL_TEST  
  freopen("input.txt", "r", stdin);  
  freopen("output.txt", "w", stdout);  
#endif  
  
  scanf("%d", &N);  
  printf("%d", N);  
#ifdef MY_LOCAL_TEST 
  fclose(stdin); 
  fclose(stdout);
#endif 
  return 0;  
}  
  