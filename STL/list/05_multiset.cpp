#include<bits/stdc++.h>
using namespace std;
// MultiSet - Sorted order and not need to be unique.
// everything is same as set.
int main(){
  multiset<int> ms;
  ms.insert(1);
  ms.insert(1);
  ms.insert(2);

  ms.erase(1); // deletes all the occurances of 1
  ms.erase(ms.find(1)); // deletes only 1 occurance
  ms.erase(ms.find(1),ms.find(1)+2);
  // rest all same as set 



  return 0;
}

