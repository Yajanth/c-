#include<bits/stdc++.h>
using namespace std;
void sq(int n){
  for (int i = 0; i < n; i++) {
    // Print a * at beginning and ending of each col
    if (i==0 || i==n-1 ) { 
        for (int j = 0; j < n; j++) {
          cout << "*";
        }
      }else {
        // print a starta beginning and eding of each row
        for (int j = 0; j < n; j++) {
          if(j==0 || j==n-1) cout<< "*";
          else cout << " ";
          
        }
      }cout << endl;
  }}
    
int main (){
 int n;
 cin >> n;
 sq(n);
 return 0; 
 
}
