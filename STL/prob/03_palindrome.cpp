#include<bits/stdc++.h>
using namespace std;
void palindrome(int num){
  int tmp=num;
  int reversed=0;
  while (tmp>0) {
    reversed=reversed*10 + tmp%10;
    tmp=tmp/10;
    
  }
  if (reversed==num) {
    cout << "Yes, it is a palindrome: " << reversed << endl;
    
  }
  else {
    cout << "No , not a palindrome: " << reversed <<endl ;
  }
}


int main(){
  int num;
  cin >> num;
  palindrome(num);



  return 0;
}
