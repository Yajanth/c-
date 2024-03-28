
#include<bits/stdc++.h>
using namespace std;
void inveq(int n){
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }
    for (int k = 0; k < 2*(n-i) -1; k++) {
      cout << "*";
    }
    for (int l = 0;  l< i; l++) {
      cout << " ";
      
    }cout << endl;
  }
}



void equtri(int n){
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n-i-1; j++) {
      cout << " ";
    }
    for (int k = 0; k < 2*i+1; k++) {
      cout << "*";
    }
    for (int l = 0; l < n-i-1; l++) {
      cout <<" ";
    }cout << endl;
    
  }
}
int main (int argc, char *argv[]) {
  cout << "Enter the size:" ;
  int n ;
  cin >> n ;
  equtri(n);
  inveq(n);
  return 0;
}
