#include<bits/stdc++.h>
using namespace std;
int main() {
  int num,temo;
  cin >> num;
  int count=1;

  for (int  i = 0; i < num ; i++) {
    if (num > 0) {      
    num=num/10;
    count++;
    }
 }
cout << "Number of digits:" << count << endl;

  return 0;
}
