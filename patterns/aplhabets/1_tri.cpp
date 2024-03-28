#include<bits/stdc++.h>
using namespace std;
void tri(int n){
  for (int i = 0; i < n; i++) {
    for (char ch='A' ;ch <= 'A'+i ; ch++) {
      cout << ch <<" " ;
      
    }cout << endl;
  }
}
int main (int argc, char *argv[]) {
  cout <<"Enter a value" ;
  int n ;
  cin >> n;
  tri(n);
  return 0;
}
