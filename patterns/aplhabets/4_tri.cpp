#include<bits/stdc++.h>
using namespace std;
void tri(int n){
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < n-i-1; j++) {
        cout << "_";
      }

      char ch='A';
      int bp=(2*i+1)/2;
      for (int l= 1; l <= 2*i+1; l++) {
      cout << ch;
      if (l<=bp ) ch++; 
      else ch--;
      }

      for (int k = 0; k < n-i-1; k++) {
        cout << "_";
      }cout << endl;
  }}
int main(){
  int n;
  cin >> n;
  tri(n);
return 0;}
