#include <bits/stdc++.h> 
// #include <iostream>
using namespace std;

int InsertionSort(int arr[], int n){
    for(int i=1 ; i<n ; i++){
        int temp=arr[i];
        int j=i-1;
        
        for( ; j>=0 ; j--){

            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int printArray(int arr[], int n){
    for (int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n= 7;
    int myArr[7]={10,1,7,4,8,2,11};
    
    InsertionSort(myArr , n);
    printArray(myArr , n);
    cout<<endl;

}