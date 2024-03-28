#include<bits/stdc++.h>
using namespace std;
void col(int n){

  for (int i = 0; i < n; i++) {
    char ch='A'+i;
       for (int j = 0; j <= i; j++) {
      cout << ch;
      

    }cout << endl;
  }
}
  int main (int argc, char *argv[]) {
  int n;
  col(5);
  return 0;
}
