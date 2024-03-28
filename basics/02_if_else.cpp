#include<bits/stdc++.h>
using namespace std;
int main () {
  int marks;
  cout << "Enter your total marks: " ;
  cin >> marks;
  if (marks <= 25){
    cout << "Grade :F \n" ;
  }
    else if (marks<=40 ){
    cout << "Grade :E \n" ;
  } 
    else if (marks<=49 ){
    cout << "Grade :D \n" ;
  } 
    else if (marks<=59 ){
    cout << "Grade :C \n" ;
  } 
    else if (marks<=79 ){
    cout << "Grade :B \n" ;
  } 
    else if (marks<=100 ){
    cout << "Grade :A \n" ;
  } 
  




    return 0;
}
