#include<iostream>
using namespace std;

void selection(int arr[], int n){

  for (int i = 0; i <= n-2; i++) {
    int mini=i ;
    for (int j = i+1; j < n-1 ; j++) {
      if (arr[j] < arr[mini]) {
        mini=j ;
      }
      int temp=arr[mini];
      arr[mini]=arr[i];
      arr[i]=temp;
      
    }
    
  }
  for (int  i = 0; i < n; i++) {
    cout << " >> "<< arr[i] << endl;
  }
}


int main(){
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n ; i++) cin >> arr[i];
  selection(arr,n);

  return 0;
}
