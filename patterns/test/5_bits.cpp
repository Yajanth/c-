#include<bits/stdc++.h>
using namespace std;
void bits(int n){
  for (int i = 0; i < n; i++) {
    int start=0;
    if (i%2==0) start=1;
    else start=0;
    for (int j = 0; j < i; j++) {
      cout << start;
     start=1-start;
      
    }cout << endl;
  }
}
int main (int argc, char *argv[]) {
  cout << "Enter a Value:";
  int n;
  cin >> n;
  bits(n);
  return 0;
}
