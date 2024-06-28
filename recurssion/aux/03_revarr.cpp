#include<iostream>
using namespace std;

void revarr(int l, int arr[] , int r ){

  if( l >= r) return ;

  swap(arr[l] , arr[r]);
  revarr(l+1,arr,r-1);
}

int main(){
  int n;
  cin >> n;
  
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  revarr(0,arr,n-1);

  for (int j = 0; j < n; j++) {
    cout << arr[j] << " , ";
  }
  return 0;
}
