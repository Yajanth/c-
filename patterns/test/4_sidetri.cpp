#include<bits/stdc++.h>
using namespace std;
void sidetri(int n){
  for (int i = 0; i < n; i++) {
    for (int j = 0; j<i; j++) {
      cout << "*";
    }cout << endl;
    
  }

for (int p = n; p > 0; p--) {
  for (int q = 0; q < p ; q++) {
    cout << "*";
  }cout << endl;
}}
int main (int argc, char *argv[]) {
  int n;
  cout << "ener the size" ;
  cin >> n ;
  sidetri(n);
  return 0;
}
