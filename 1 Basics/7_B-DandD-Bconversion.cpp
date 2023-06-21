#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

//For Decimal to Binary Conversion
int main(){
  
  int n;
  cout<<"Enter the no :";
  cin>>n;
  int ans=0;
  int mult=1;

  while(n!=0){
    int bit=n%2;
    ans=(bit * mult) + ans;
    mult=mult*10;
    n=n/2;

  }
  cout<<"Binary Transition :"<<ans<<endl;
  return 0;
}

// For Binary to Decimal Conversion
int main(){
  
  int n;
  cout<<"Enter the binary no :";
  cin>>n;
  int ans=0;
  int mult=1;

  while(n!=0){
    int bit=n&1;
    ans=(bit * mult) + ans;
    mult=mult*2;
    n=n/10;

  }
  cout<<"Decimal Transition :"<<ans<<endl;
  return 0;
}