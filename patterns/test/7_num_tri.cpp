#include<bits/stdc++.h>
using namespace std;
void tri(int n){
  int num=1;
  for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
      cout << num << " ";
      num=num+1; 
    }
  cout << endl;
}}
int main (int argc, char *argv[]) {
  cout << "Enter a Value:";
  int n;
  cin >> n;
  tri(n);

  return 0;
}
