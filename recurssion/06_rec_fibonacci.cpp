#include<iostream>
using namespace std;


int pri(int n){

  if ( n <= 1) {
    return n ;
  } 

  return pri(n-1) + pri(n-2);
} 
int main(){
  int n;
  cin >> n;
  pri(n);
  return 0;
}
