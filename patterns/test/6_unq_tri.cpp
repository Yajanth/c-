#include<bits/stdc++.h>
using namespace std;
void unq(int n){
  for (int i = 1; i < n+1; i++) {
    for (int j =1 ; j <= i ; j++) {
      cout << j;
    }    
    for (int k = 0; k < 2*(n-i); k++) {
      cout << " ";      
    }
    for (int l = i; l >0; l--) {
      cout << l;  
    }cout << endl;}}
int main (int argc, char *argv[]) {
  cout << "Enter a Value:";
  int n;
  cin >> n;
  unq(n);

  return 0;
}
