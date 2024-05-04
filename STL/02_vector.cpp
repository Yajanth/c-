#include<bits/stdc++.h>
using namespace std;
int main (){
  
  vector<int> v(5,10);
  vector<int> v1(5); // creates a vector of 5 zeros
  cout<< v[4] << endl;
  v.push_back(9);

  for (int i = 0; i < v1.size(); i++) {
   cout << v1[i] << ",";  
  }cout << endl;
  return 0;

}
