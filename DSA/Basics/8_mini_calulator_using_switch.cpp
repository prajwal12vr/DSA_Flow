#include <iostream>
#include <cstdio>
using namespace std;


int main(){

  int a,b;
  cout<<"enter the numbers :";
  cin>>a>>b;
  cout<<"Your options are - + - x /"<<endl<<"enter what you wanna do :";
  char ch;
  cin>>ch;

  switch(ch){

    case '+':
      cout<<(a+b)<<endl;
      break;

    case '-': 
      cout<<(a-b)<<endl;
      break;

    case 'x':
      cout<<(a*b)<<endl;
      break;

    case '/':
      cout<<(a/b)<<endl;
      break;
    
  }
  return 0;
  
}