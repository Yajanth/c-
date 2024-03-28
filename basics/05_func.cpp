#include<bits/stdc++.h>
using namespace std;
// there are 2 types of func
// void : doest return any vakue
// int : returns a value.
void printname(string name){
  cout << "This is " << name << "\n";}

int sum (int num1,int num2){
  int num3 =num1 + num2;
  return num3;
}  

int main (){
  string name;
  printname(name);
  cout << sum(5,10) << endl;
  int res =sum(20,30);
  cout << res << endl;
   
  return 0;
}
