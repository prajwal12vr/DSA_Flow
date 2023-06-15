#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// void printStack(const stack<int>& s) {
//     for (int i : s) {
//         cout << i << " ";
//     }
//     cout << endl;
// }
//THIS DOESNT WORK AS YOU CANNOT DIRECTLY ACCESS STACK
// int main(){
//     stack<int>l={1,2,3,4,5};  
//     printStack(l);
// }

int main(){
    stack<string>s;

    s.push("Prajwal");
    s.push("Vijay");
    s.push("Randive");

    cout<<s.top()<<endl; //Top of stack using LIFO

    s.pop();
    cout<<s.top()<<endl;

    s.pop();
    cout<<s.top()<<endl<<endl;

//DEMARCATION

    queue<string>q;

    q.push("Prajwal");
    q.push("Vijay");
    q.push("Randive");

    cout<<q.front()<<endl; //front of queue using FIFO

    q.pop();
    cout<<q.front()<<endl;

    q.pop();
    cout<<q.front()<<endl;

}