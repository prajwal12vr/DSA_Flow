
#include <iostream>
using namespace std;

int selectionSort(int arr[], int n){

    for(int i=0; i<n-1 ; i++){
        int minIndex=i;
        
        for(int j=i+1; j<n ; j++){
            if(arr[minIndex]>arr[j]) minIndex=j;
        }
        
        swap(arr[i],arr[minIndex]);
    }
      
} 

int printArray(int arr[], int n){
    for (int i=0 ; i<n ; i++){
        cout<<arr[i];
    }
}

int main(){
    int n= 6;
    int myArr[n]={1,4,3,6,7,8};
    
    selectionSort(myArr , n);
    printArray(myArr , n);
}
