#include<bits/stdc++.h>
using namespace std;
int main (){
  vector<int> v1(5,23);
  vector<int> v2={10,20,30,40,50,62};
  cout << v2[3] <<endl;

  vector<int>::iterator it= v1.begin();
  cout << *(it);
  
// --------------------Looping a vector
  for (vector<int>::iterator it=v2.begin(); it != v2.end(); it++) {
    cout << ":" << *(it) << endl; 
  }

  for (auto it = v1.begin(); it != v1.end(); it++) {
    cout << "--" << *(it) <<endl;
  }

//for each Looping
  for (auto it :v2) {
    cout << it << "  ";
    
  }
  return 0;
}
