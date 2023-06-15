#include <iostream>
using namespace std;

int fact(int n){
  int fact=1;
  for(int i=1; i<=n; i++){
    fact=fact*i;
  }
  return fact;
}

int ncr(int n,int r){
  int ncr= (fact(n))/(fact(r)*fact(n-r));
  return ncr;
}

int main(){
  int n,r;
  cout<<"enter the numbers :"<<endl;
  cin>>n>>r;
  cout<< ncr(n,r) <<endl;
  
}