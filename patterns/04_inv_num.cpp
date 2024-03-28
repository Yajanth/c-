#include<bits/stdc++.h>
using namespace std;
void inv_num(int num){
  for (int i = num+1; i > 0; i--) {
    for (int j = 1; j<i; j++) {
      cout << j;
      
    }cout << endl;
    
  }
}
int main (){
  inv_num(5);
}
