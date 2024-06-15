#include<iostream>
using namespace std;
// Parametarized way - the parameters passing to the function change
void summ(int i, int sum){
  if(i<1){
    cout << "sum: " <<  sum << endl;
    return;
  }
  summ(i-1,sum+i);
}

int main(){
  int n;
  cin >> n;
  summ(n,0);
  return 0;
}
