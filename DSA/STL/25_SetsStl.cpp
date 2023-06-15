#include <iostream>
#include <set>
using namespace std;

void printSet(const set<int>& s){
    for(auto i: s){
        cout<<i<<" ";
    }
    cout<<endl;
}

int main(){
    set<int>s;

    s.insert(5); //kitne bhi insert karlo niklega to ek hi
    s.insert(5);
    s.insert(5);
    s.insert(5);
    
    s.insert(2);
    s.insert(2);

    s.insert(4);
    s.insert(1);
    s.insert(0);
    s.insert(6);

    printSet(s);

    s.erase(s.begin());
    printSet(s);

    s.insert(1);

    cout<<"-1 present ? "<<s.count(-1)<<endl;
    cout<<"1 present ? "<<s.count(1)<<endl;

    set<int>::iterator it=s.begin(); //removes the second element
    it++;
    s.erase(it);
    printSet(s);

    s.insert(2)

    set<int>::iterator it1 = s.find(5);
    for (auto it = it1; it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl; //GIVES 5 and 6
 
}
