#include<iostream>
using namespace std;

void fibo_brute(int n){
  int fib[n+1];
  fib[0]=0;
  fib[1]=1;
  if (n == 0) {
    cout << fib[0] << endl;
  }
  else if (n == 1) {
    cout << "0, 1" << endl;
  }
  else if (n > 1) {
    for (int i = 2; i < n; i++) {
      fib[i]= fib[i-1] + fib[i-2];   
      cout << fib[i] << endl;
    } 
  }
  for(int i=0 ; i < n ;i++){
  cout << i + 1 << " : " << fib[i] << endl ;
  }
}

int main(){
  int n;
  cin >>n;
  fibo_brute(n);
return 0;
}
