#include <iostream>
using namespace std;

int main(){

    int arr[5] = {2,4,6,8,10};
    

    cout<<"The address of array can be shown by :"<<arr<<endl;
    cout<<"The address of array can also be shown by :"<<&arr<<endl<<endl;

    // int *p = &arr; -- X
    int *p = &arr[3];
    cout<<"The element accessed is :"<<*p<<endl<<endl;

    //Accessing array
    cout<<"1. "<< *arr <<endl;
    cout<<"2. "<< *arr + 1 <<endl;
    cout<<"2. "<< *(arr) + 1 <<endl;
    cout<<"3. "<< *(arr+1) <<endl;
    cout<<"4. "<< *(arr+1)+1 <<endl;
    cout<<"5. "<< arr[2] <<endl;
    cout<<"6. "<< *(arr+2) <<endl<<endl;

    //i[arr] & arr[i] property
    int i= 4;
    cout<<"1. "<< arr[i] <<endl;
    cout<<"2. "<< i[arr] <<endl;
    cout<<"3. "<< *(arr+i)<<endl;
    cout<<"4. "<< *(i+arr)<<endl;
    cout<<"5. "<< *(arr+4)<<endl;
    // cout<<"6. "<< *(i+4)<<endl; -- This wont work


}