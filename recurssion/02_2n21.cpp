#include<iostream>
using namespace std;

void n2one(int i , int n){
  if(i>n) return ;
  n2one(i+1,n);
  cout << i;
}

int main(){
  int n;
  cin >> n;
  n2one(1,n);

  return 0;
}
