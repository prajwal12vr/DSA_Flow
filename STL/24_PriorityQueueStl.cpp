#include <iostream>
#include <queue>
using namespace std;

int main(){

    //max heap
    priority_queue<int>maxp;

    //min heap
    priority_queue< int,vector<int> , greater<int> >minp;

    maxp.push(1);
    maxp.push(3);
    maxp.push(2);
    maxp.push(0);

    int n=maxp.size();
    cout<<" The size of queue is :"<<n<<endl;\

    cout<<maxp.top()<<endl;

    for (int i=0 ; i<n ; i++ ){
        cout<<maxp.top()<<" ";
        maxp.pop();
    }
    cout<<endl<<endl;

    minp.push(5);
    minp.push(1);
    minp.push(0);
    minp.push(4);   

    int m=minp.size();

    for (int i=0 ; i<m ; i++ ){
        cout<<minp.top()<<" ";
        minp.pop();
    }

    cout<<" Khali hai kya bhai ? "<<endl;
    cout<<"for max "<<maxp.empty()<<endl;
    cout<<"for min "<<minp.empty()<<endl;

    //Both return Boolean 1 which means they are empty this is because they became empty after popping

}