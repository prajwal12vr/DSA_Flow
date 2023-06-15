#include <iostream>
using namespace std;

int main(){
    int a=4;
    int b=5;

    //a=0100 and
    //b=0101
    cout<<"a&b: "<<(a&b)<<endl;
    cout<<"a|b: "<<(a|b)<<endl;
    cout<<"~a: "<<(~a)<<endl;
    cout<<"a^b: "<<(a^b)<<endl;
    cout<<"a<<2: "<<(a<<2)<<endl;
    cout<<"b>>2: "<<(b>>2)<<endl;

}