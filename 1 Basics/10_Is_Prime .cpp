#include <iostream>
#include <cstdio>
using namespace std;

//1=Prime
//0=Not Prime

bool isPrime(int n){
  for(int i=2; i<n; i++){
    if (n%i==0){
      return 0;
    }
    return 1;
  }
}

int main(){

  int n;
  cin>>n;
  int ans=isPrime(n);

  if (ans==1){
    cout<<n<< " is Prime";
  }
  else {
    cout<<n<< " is not Prime";
  }
}