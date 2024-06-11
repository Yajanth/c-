#include<iostream>
using namespace std;

void revarr(int arr[],int n){
  
  int rev_arr[n];
  for (int i = 0; i < n; i++) {
    rev_arr[i]=arr[n-i-1];
    cout << rev_arr[i] << endl;
  }
}

int main(){

  int arr[5]={1,2,3,4,5};
  revarr(arr,5);
  return 0;
}
