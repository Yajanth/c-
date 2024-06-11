#include<iostream>
using namespace std;
 int sum( int n){
   if(n==0) return n;
   int sumfn= n+sum(n-1);

   return sumfn;
 }

int main(){
  int n;
  cin >> n;
  int sol = sum(n);
  cout << sol << endl;;
  return 0;
}
