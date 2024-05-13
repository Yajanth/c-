#include<bits/stdc++.h>
using namespace std;
int main () {
  stack<int> st ; //Last in First out
  st.push(10);
  st.push(236);
  st.push(9);
  cout <<st.top() << endl; 
  st.pop();
  cout <<st.top(); 
// All operations happen in time complexity is O(1).
return 0;}
