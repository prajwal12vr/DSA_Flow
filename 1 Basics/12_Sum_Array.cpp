#include <iostream>
using namespace std;
#include <limits.h>

int sumArr(int arr[], int n){

  int sum=0;
  for (int i=0; i<n ; i++){
    sum=sum+arr[i];
  }
  return sum;
}

int main(){

  int n=5;
  int myArr[]={1,2,3,4,5};

  cout<<sumArr(myArr,5);
  
}