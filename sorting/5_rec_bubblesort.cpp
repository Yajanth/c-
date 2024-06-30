#include<iostream>
using namespace std;

void rec_bs(int arr[],int n){

  if(n == 1 ) return;

  for (int i = 0; i <= n-2 ; i++) {
    if (arr[i+1] < arr[i]) {
      int temp = arr[i+1];
      arr[i+1] = arr[i];
      arr[i]=temp;
    }
  }
  for(int j=0 ; j <= n-1; j++) cout << " | "<< arr[j] << " | " ;
  cout <<endl;
  rec_bs(arr, n-1);
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n ; i++) cin >> arr[i];
  rec_bs(arr,n);
 cout << "After bubble sort: "; 
  for(int j=0 ; j <= n-1; j++) cout << " | "<< arr[j] << " | " ;

  return 0;
}
