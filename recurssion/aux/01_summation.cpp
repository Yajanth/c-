#include<iostream>
using namespace std;

int summation(int n){

  if( n == 0) return 0;

  return  n + summation(n - 1);
}
int main(){
  int i;
  cin >> i;
  cout << summation(i);

}


