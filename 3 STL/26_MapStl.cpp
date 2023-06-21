#include <iostream>
#include <map>
using namespace std;

void printMap(const map<int , string>& m){
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
}

int main(){
    map <int , string> m;

    m[1]="Prajwal";
    m[2]="Vijay";
    m[3]="Randive";

    printMap(m);

    m.insert({4, "The Greatest"});
    m.insert({5, "Prick"});

    printMap(m);

    m.erase(5);

    printMap(m);
    
    auto it=m.find(3); // iterator ke pehle ki sab values nikalta iterator using this
    for(auto i=it ; i!=m.end() ; i++){
        cout<<(*i).first<<endl;
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }

    cout<<endl;
    printMap(m); //doesnt change the whole map tho just in the scope of loop for the iterator

    cout<<" 5 hai kya "<<m.count(5)<<endl; //obvioz returns in Boolean value
    cout<<" 2 hai kya "<<m.count(2)<<endl;
 
}
