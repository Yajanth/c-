#include<iostream>
using namespace std;

int revpr( int n){

  if(n<1) return 0;
  cout << n <<" , ";
  return revpr(n-1);
}
int main(){
  int n;
  cin >> n;
  revpr(n);
  return 0;
}
