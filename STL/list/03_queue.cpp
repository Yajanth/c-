#include<bits/stdc++.h>
using namespace std;
int main(){
  queue<int> q1; //{} -- First in first out
  q1.push(12); //{12}
  q1.push(6); //{12,6}
  q1.push(51); //{12,6,51}

  cout << q1.front() << endl;
  cout << q1.back() << endl;
  
  q1.back()+=5; //{12,6,56}
  
  cout << q1.back() << endl;
  q1.pop(); //{6,56}

  cout << q1.front() << endl;
  return 0;
}
