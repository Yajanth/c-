#include<iostream>
using namespace std;
int sum(int n){

  if (n < 1) return 0;
  int solution = 0;
  solution= n+ sum(n-1);
 // cout << solution <<endl;
return solution;
}
int main(){
  int n;
  cin >> n;
  sum(n);
  return 0;
}
