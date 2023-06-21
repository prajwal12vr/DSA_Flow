#include <iostream>
using namespace std;
#include <limits.h>

bool search (int arr[] , int size , int key){

  for(int i=0 ; i<size ; i++){
    if(arr[i]==key){
      return true;
    }
  }
  return false;
}

int main(){

  int size=10;
  int myArr[]={1,2,3,4,5,6,7,8,9,10};

  int element;
  cout<<"enter the element you want to find :"<<endl;
  cin>>element;

  bool found=search(myArr, size , element);
  if (found){
    cout<<"your number is there mlday";
  }
  else{
    cout<<"nahi hai lodu";
  }
  return 0;
}