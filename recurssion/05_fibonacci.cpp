#include<iostream>
using namespace std;
int recfibo(int n){
  if(n<=0){
    return n;
  }
  int last = recfibo(n-1);
  int slast =recfibo(n-2);




}
int main(){
  int n;
  cin >> n;
  fibo(n);

return 0;

}



int fibo(int n){
  int fib[n+1];
  if (n==0){
    cout<< " 0 "<< endl;
  }
  else if(n==1){
    cout  << "0,1 " << endl;
  }
  else{
    fib[0]=0;
    fib[1]=1;
    for(int i=2; i <= n ; i++){
      fib[i]=fib[i - 1] + fib [i - 2];
    }
  }
  for(int i=0; i<n ; i++){
      cout << fib[i]<< endl;
      }
       
     return 1;
}
