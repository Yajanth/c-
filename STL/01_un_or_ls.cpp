#include<bits/stdc++.h>
using namespace std;
int main(){
  pair<int,int> p={1,10};
  cout << p.first << "," << p.second << endl;
  pair<int,pair<int,int>> q={1,{20,50}};
  cout << q.second.second << endl;
  return 0;
}
