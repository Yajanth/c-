#include<bits/stdc++.h>
using namespace std;
// Set - Sorted order and unique
//
int main(){
  set<int> st; 
  st.insert(1);  //{1}
  st.insert(10); //{1,10}
  st.insert(5); //{1,5,10}
  st.insert(4); // {1,4,5,10}
   st.insert(6); //{1,4,5,6,10}
  cout << *st.begin()<< endl;
  //begin(),end(),rbegin(),rend(),size(),empty(),swap()
  int n;
  cin >> n;
  auto it =st.find(n); // if the n is not in the set it returns last integer of the set 

  cout<< *it << endl;
  st.erase(5); //Erases the digit 5
   

  auto it2 =st.find(10);
  cout<< *it2;






  return 0;
}
