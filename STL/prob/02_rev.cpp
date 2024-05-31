#include<bits/stdc++.h>
using namespace std;
void rev(int num){
  int temp=num;
  int reversed=0;
  for (int i = 0; i < num ; i++) {
    if (temp > 0) {
    reversed= reversed*10 + temp%10;
    cout << "rev:" <<reversed << endl;
    temp=temp/10;
  }
  else {
    cout << "Done!" << endl;
  }}
  cout << "Reversed:" << reversed << endl; 
}

void optimal_rev(int num){
  int tmp=num;
  int reved=0;
  while (tmp>0) {
    reved=reved*10 + tmp%10;
    tmp=tmp/10;
  }cout << "reversed :" << reved;

}

int main(){
  int num;
  cin >> num;
  optimal_rev(num);


  return 0;
}
