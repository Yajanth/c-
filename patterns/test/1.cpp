#include<iostream>
using namespace std;
void pattern3(int n){
  for (int i =0; i < n+2; i++) {
    for (int j = 1; j < i; j++) {
      cout << j ;
    }cout << "\n"; 
  }
}
void pattern1(int n){
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "*" ;
    }cout << "\n"; 
  }
}
void pattern2(int n){
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << "*" ;
    }cout << "\n"; 
  }
}
int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) { 
      int n;
      cin >> n;
      pattern3(n);
  }
return 0;
}
