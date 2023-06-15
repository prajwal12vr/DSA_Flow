#include <iostream>
using namespace std;

int main(){
  int n=5;

  int i=1;
  while(i<=n){

    //1st no tri
    int num=1;
    while(num<=n-i+1){
      cout<<num;
      num=num+1;
    }

    //1st star tri
    int j=1;
    while (j<i){
      cout<<"*";
      j=j+1;
    }

    //2nd star tri
    int j1=1;
    while(j1<i){
      cout<<"*";
      j1=j1+1;
    }

    //2nd no tri
    int num2=n-i+1;
    while(num2>=1){
      cout<<num2;
      num2=num2-1;

    }
    cout<<endl;
    i=i+1;

  }
}