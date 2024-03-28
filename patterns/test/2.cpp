#include<iostream>
using namespace std;
void inv_num(int n){
  for (int i = n+1; i >0; i--){
    for (int j = 1; j < i; j++) {
      cout << j; 
    }cout << "\n";

  }}
void inv_tri(int n){
  for (int i = n; i >0; i--){
    for (int j = 0; j < i; j++) {
      cout << "*"; 
    }cout << "\n";

  }}
int main (int argc, char *argv[]) {
 int n;
 cin >>n;
 inv_num(n);
  return 0;
}
