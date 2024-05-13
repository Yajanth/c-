#include<bits/stdc++.h>
using namespace std;
int main (){
  vector<int> v1={15,6,4};
  //syntax: v.insert(index,element) / (index,count,element)
  v1.insert(v1.begin(),234);
  v1.insert(v1.begin() + 2,3,23);
  for (auto it = v1.begin() ; it != v1.end(); it++) {
    cout <<*(it)<<endl;
  }
    

  




  return 0; }
  

