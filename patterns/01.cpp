#include<bits/stdc++.h>
using namespace std;
void pattern(int n){

  for (int i = 0; i < n+1; i++){
    for (int j=0;j<i; j++){
      cout << "*";
  }cout << "\n";}
}
// custom number of test cases are given 
int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {int num;
   cin >> num;
   pattern(num); 
  }
  return 0;
}


