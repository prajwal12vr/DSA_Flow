#include <iostream>
using namespace std;
#include <limits.h>
  
//defining function for Maximum value in array
int getMax(int arr[], int size){

  int maxValue= INT_MIN;
  for (int i=0 ; i<size ; i++){
    if (maxValue<arr[i]){
      maxValue=arr[i];
    }
  }
  return maxValue;
}

//defining function for Minimum value in array
int getMin(int arr[], int size){

  int minValue= INT_MAX;
  for (int i=0 ; i<size ; i++){
    if (minValue>arr[i]){
      minValue=arr[i];
    }
  }
  return minValue;
}

//check for an actual array
int main(){

  int n;
  cout<<"Enter the size of array you want :";
  cin>> n;

  int myArr[1000];
  
  cout<<"Enter the elements in your said array :";
  for(int i=0; i<n ; i++){
    cin>>myArr[i];
  }

  cout<<"Maximum value of array is :"<<getMax(myArr,n)<<endl;
  cout<<"Minimum value of array is :"<<getMin(myArr,n)<<endl;
}