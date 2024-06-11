#include<iostream>
using namespace std;

void one2n(int i , int n){

  if(i<1) return ;
  one2n(i-1,n);
  cout << i << " , ";
}

int main(){
  int n;
  cin >> n;
  one2n(n,n);
return 0;

}
