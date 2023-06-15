#include <iostream>
#include <vector>
using namespace std;

void printVector(const vector<int>& v) {
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    vector<int>v={1,2,3,4,5}; // initialise   
    printVector(v);

    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl<<endl;

    v.push_back(6); // adding element to end of vector
    printVector(v);

    cout<<v.capacity()<<endl; // capacity doubles 
    cout<<v.size()<<endl<<endl; // size increases

    v.pop_back(); // removes element at the end
    printVector(v);

    vector<int>v1(5,1);
    printVector(v1);
    

    // cout<<"Element at index 3 is "<<v.at(3)<<endl; //Indexing

    // cout<<"Khali hai kya bhai : "<<v.empty()<<endl;

    // cout<<v.front()<<" "<<v.back()<<endl;

}