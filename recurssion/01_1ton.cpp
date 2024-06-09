#include<iostream>
using namespace std;

int print(int n){
  if (n<1) return 0 ;
  cout << "Yajanth Maharaj" << endl;
  return print(n-1);
}
int main(){
  int n;
  cin >> n;
  print(n);
  return 0;
}
