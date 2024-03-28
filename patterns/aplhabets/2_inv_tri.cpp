#include<bits/stdc++.h>
using namespace std;
void inv(int n){
  for (int i = n; i>0 ; i--) {
    for (char ch = 'A' ; ch <='A'+ i-1; ch++) {
      cout << ch;
    }cout << endl;    
  }
}
int main (int argc, char *argv[]) {
  cout << " Value :";
  int n;
  cin >>n;
  inv(n);
  return 0;
}
