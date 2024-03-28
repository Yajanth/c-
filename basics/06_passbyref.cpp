#include<bits/stdc++.h>
using namespace std;
// Pass_by _Reference: We send the original value to the func and chnage it .
// example of Pass_by value
void change_byval(string name){
  name[1]='z';
  cout << name << endl ;
}
// Pass_by _Referencvoid chnage_byref(string name){
void change_byref(string &name){
  name[1]='z';
  cout << name << endl ;
}


int main(){
  string name = "Yajanth";
  change_byref(name);
  cout << "After exe func \n" << name << endl;



  return 0;
}
