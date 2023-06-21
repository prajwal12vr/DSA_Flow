#include <iostream>
using namespace std;

int main(){

    int num = 5;

    int a = num;
    cout<<"before changing :"<<num<<endl;
    a++;
    cout<<"after changing :"<<num<<endl<<endl;


    //as we can see pointer has the ability to change and influence the value

    int *p = &num;
    cout<<"before changing :"<<num<<endl;
    (*p)++;
    cout<<"after changing :"<<num<<endl<<endl;

   
    //giving one pointer value to another pointer

    int *q = p;
    cout<<"Lets Compare"<<endl;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl<<endl;
    
    double db=420.69;
    double *r = &db;
    //effect on pointer
    cout<<"Before change :"<<*r<<endl;
    (*r)++;
    cout<<"After change :"<<*r<<endl<<endl;

    cout<<"Before change :"<<r<<" and its size is :"<<sizeof(r)<<endl;
    r++;
    cout<<"After change :"<<r<<" and its size is :"<<sizeof(r)<<endl;
}