#include<bits/stdc++.h>
using namespace std;
int main(){
 pair<int,float> p={10,5};
 cout << p.first;
// Pair inside pair
 pair<int, pair<int,pair<int,int>>> q={10,{10,{5,6}}};
 cout << q.second.first << endl;

  return 0;
}
