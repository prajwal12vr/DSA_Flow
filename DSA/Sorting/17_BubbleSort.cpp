#include <bits/stdc++.h> 
// #include <iostream>
using namespace std;

//ascending
int bubbleSort(int arr[], int n)
{   
    for(int i=1 ; i<n ; i++){
        
        for (int j=0 ; j<n-i ; j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }

        }
        
    }

}

//descending
int bubbleSort1(int arr[], int n)
{   
    for(int i=1 ; i<n ; i++){
        
        for (int j=0 ; j<n-i ; j++){

            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }

        }
        
    }

}

int printArray(int arr[], int n){
    for (int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n= 6;
    int myArr[6]={1,4,3,6,7,8};
    
    bubbleSort(myArr , n);
    printArray(myArr , n);
    cout<<endl;
    bubbleSort1(myArr,n);
    printArray(myArr,n);
}