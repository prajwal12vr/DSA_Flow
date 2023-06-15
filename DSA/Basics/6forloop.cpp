#include <iostream>
using namespace std;

int main(){

  int n=10;

//Check the sum of the number
  int sum=0;
  for(int i=0; i<=n ; i++){
    sum+=i;
  }
  cout<<sum<<endl;

//Check if it is prime

  for(int i=2; i<n ; i++)
    if (n%i==0){
      cout<<"Not prime"<<endl;
      break;
    }
    else {
      cout<<"Prime"<<endl;
      break;
    }

//Give its Fibonacci series

  int a=0;
  int b=1;
  cout<<a<<" "<<b<<" ";

  for(int i=1;i<=n;i++){

    int nextnum=a+b;
    cout<<nextnum<<" ";
    
    a=b;
    b=nextnum;

  }

  for(int i=0; i<6 ; i++){
    for(int j=i; j<=7 ; j++){
      if (i+j==10){
        break;
      }
      cout<<i<<" "<<j<<endl;
    }
  }
}
