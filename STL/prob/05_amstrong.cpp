#include<bits/stdc++.h>
using namespace std;
void amstrong(int n){
  int strong=0;
  int tmp=n;
  int k=to_string(n).length();
    while (tmp >0) {
      strong = strong +pow(tmp%10,k);
      tmp = tmp/10;

    }
    if (strong == n) {
      
    cout <<"Yes it is a n amstorng number :" << strong << endl;
  }
  else {
    cout << " No its is not an amstrong number " << endl ;
  }


}

int main(){
  int n;
  cout << "enter the number :" ;
  cin >> n;
  amstrong(n);
  return 0;
}
