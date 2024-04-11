#include<bits/stdc++.h>
using namespace std;
void star(int n){
  for (int i = 0; i < n; i++) {
     for (int j = n - i; j>0; j--) {
      cout << "*";      
    }
     for (int j = 1; j <= i*2 ; j++) {
       cout << " ";
     }
     for (int j = n-i ; j>0; j--) {
      cout << "*";      
    }cout << endl;
 }}
void inv_star(int n){
for (int i = 0; i < n-1; i++) {
   for (int j = 0; j <= i; j++) {
    cout << "*";    
  }
   for (int j = 2*n-2*i-2; j > 0; j--) {
    cout << " ";
   }
   for (int j = 0; j <= i; j++) {
    cout << "*";    
  }cout << endl; 
}  
}
int main(){
  int n;
  cin >>n;
  inv_star(n);
  star(n);

return 0;}
