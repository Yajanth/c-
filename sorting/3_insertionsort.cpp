#include<iostream>
using namespace std;

void insertion(int arr[], int n){
  for (int i = 0; i <= n-1; i++) {
    int j=i;

    while (arr[j] < arr[j-1] && j > 0) {
      int temp=arr[j - 1];
      arr[j-1] = arr[j];
      arr[j]=temp;
      j--; 
    }
  }
}

int main(){
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i <= n-1 ; i++) cin >> arr[i];
  
  insertion(arr,n);
  for (int j = 0; j < n ; j++) cout << " >> " << arr[j] << endl;
  return 0;
}
