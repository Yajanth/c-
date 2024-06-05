#include<bits/stdc++.h>
using namespace std;

vector<int> divi(int n){
  vector<int> divisors;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {

        divisors.push_back(i);
      if (n/i != i ) {
        divisors.push_back(n/i);
      }
    }
  } 
return divisors;
}

int main(){
  vector<int> divisors;
  int n;
  cout << " Enter the integer to find divisors:";
  cin >> n;
  divisors= divi(n);
  for(int divisor : divisors){
    cout << divisor << " ";
  }

  return 0;
}
