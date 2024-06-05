#include<bits/stdc++.h>
using namespace std;
void prime(int n){
  int check =0;

  for (int i = 1; i < n; i++) {
    if (n%i == 0) {
      check++;
    }
  }if (check > 2) {
    cout << n <<" is not a prime number. Number of divisor :" << check << endl;
    
  }
  else {
    cout << "It is a prime number ";
  }
}

int main(){
  int n;
  cout << "enter the integer: ";
  cin >> n;
  prime(n);
  return 0;
}
