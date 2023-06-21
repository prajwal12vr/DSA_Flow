#include <iostream>
#include <list>
using namespace std;

void printList(const list<int>& l) {
    for (int i : l) {
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    list<int>l={1,2,3,4,5}; // initialise   
    printList(l);

    l.pop_back();
    l.pop_front();
    printList(l);

    l.push_back(6);
    l.push_front(0);
    printList(l);

    list<int>l1(6,0);
    printList(l1); 

}