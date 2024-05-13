#include<bits/stdc++.h>
using namespace std;
void print_vec(){

}
int main (){
  vector<int> v1={45,684,654,654,32};
  
  for (auto it = v1.begin(); it != v1.end(); it++) {
    cout << *(it) <<" " ;
  }
  
  v1.erase(v1.begin()+ 1); // deleting second term or index =1
 for (auto it = v1.begin(); it != v1.end(); it++) {
    cout <<">>" << *(it) <<"<< " ;
  }
// synatx v.erase(start,end)
 v1.erase(v1.begin()+1 , v1.begin()+3); // range of numbers to be deleted. First number is deleted and last numbers isnt deleted
 for (auto itn = v1.begin(); itn != v1.end(); itn++) {
    cout <<endl << *(itn) <<"<< " ;
  }




  return 0;
}
