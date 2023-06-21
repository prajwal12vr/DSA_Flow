#include <iostream>
#include <deque>
using namespace std;

void printDeque(const deque<int>& d) {
    for (int i : d) {
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    deque<int>d={1,2,3,4,5}; // initialise
    printDeque(d);

    d.push_back(100);
    d.push_front(101);
    printDeque(d);

    cout<<d.empty()<<endl;

    d.erase(d.begin(),d.begin()+1);
    printDeque(d);

    d.erase(d.begin(),d.begin()+2);
    printDeque(d);

}