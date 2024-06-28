#include<iostream>
using namespace std;

void bubble(int arr[], int n){
  for (int j = 0; j < n-1 ; j++) {
    for (int i = 0; i < n - 1 -j; i++) {

      if (arr[i+1] < arr[i]) {
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
  }
}
for (int i = 0; i < n; i++) cout << " >> " << arr[i] << endl;
  
  
}
int main(){
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n ; i++) cin >> arr[i];
  bubble(arr,n);

  return 0;
}
