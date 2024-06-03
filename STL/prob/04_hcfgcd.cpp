#include<bits/stdc++.h>
using namespace std;

void bestgcd(int n1,int n2){
  int gcd =1;
    while (n1 > 0 && n2 > 0) {
      if (n1 > n2) {
        n1 = n1 % n2;
        cout << n1 << endl;
      }
      else {
        n2 = n2 % n1;
        cout <<n2 << endl;
      }
    } 
  }
int main(){
  int n1,n2;
  cout << "Enter n1:" ;
  cin >> n1 ;

  cout << "Enter n2:" ;
  cin >>n2 ;
  bestgcd(n1,n2);

 return 0;
}



int optimalgcd(int n1 , int n2){
  int gcd =1;
  for (int i = min(n1,n2) + 1; i > 1; i--) {
    if (n1 % i == 0 && n2 % i == 0) {
      gcd=i;
      cout <<"GCD "<< i << endl;
      return i;      
    }
  }
  cout << "Gcd of " << n1 << " and " << n2 << " is " << gcd << endl;
  return 1;
}











void gcd(int n1,int n2){
  int gcd=1;
  for (int i = 1; i <= min(n1,n2); i++) {
    if (n1 % i == 0 && n2 % i == 0) {
      gcd=i;      
    }
  }
    cout << "Gcd of " << n1 << " and " << n2 << " is " << gcd << endl;
}

