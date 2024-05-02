#include<bits/stdc++.h>
using namespace std;
int main (){
  
  vector<int> v(5,10);
  cout<< v[4] << endl;
  v.push_back(9);

  for (int i = 0; i < v.size(); i++) {
   cout << v[i] << ",";  
  }cout << endl;
  return 0;

}
