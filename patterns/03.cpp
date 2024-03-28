#include<bits/stdc++.h>
using namespace std;
void inv_star(int num){
  for (int i = num; i>0 ; i--) {
    for (int j = i; j >0; j--) {
      
    cout << "*" ;
    }cout << endl;  
  }
}
int main(){
 inv_star(6);
  return 0;
}
