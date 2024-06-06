#include<iostream>
using namespace std;

void func(int i ,int n){
  
  if(i<1) return;
  cout <<" >> " << i << endl;
  i--;
  func(i,n);
}

int main(){
  int n;
  cin >> n;
  func(n,n);

}
