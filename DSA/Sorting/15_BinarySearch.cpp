#include <iostream>
using namespace std;
#include <limits.h>

int binarySearch (int arr[], int size , int key){
  int s=0;
  int e=size-1;

  int m=s+(e-s)/2;

  while(s<=e){

    if (arr[m]==key){
      return m;
    }
    if (key>arr[m]){
      s=m+1;
    }
    if (key<arr[m]){
      e=m-1;
    }
    m=s+(e-s)/2;
  }
  return -1;
}

int main(){

  
  int even[8]={1,2,3,4,5,6,7,8};
  int odd[5]={10,11,12,13,14};

  int key;
  cout<<"enter the number you want to find :";
  cin>>key;
  
  int index=binarySearch(even, 8, key);
  cout<<"The index value of "<<key<<" is "<<index<<endl;
}