#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int,5>a={1,2,3,4,5}; // initialise

    int size=a.size();
    cout<<size<<endl; // size

    for(int i=0 ; i<size ; i++){
        cout<<a[i]<<" ";
    } // printing array
    cout<<endl;

    cout<<"Element at index 3 is "<<a.at(3)<<endl; //Indexing

    cout<<"Khali hai kya bhai : "<<a.empty()<<endl; // Checking If empty

    cout<<a.front()<<" "<<a.back()<<endl; //front and back element

}