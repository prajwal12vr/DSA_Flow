#include <iostream>
using namespace std;

int main(){

    int num = 5;
    //initiate pointer
    int *ptr = &num;

    cout<<"the number is "<<num<<endl;
    cout<<"the number accessed through pointer is "<<*ptr<<endl<<endl;

    cout<<"address of num is "<<&num<<endl;
    cout<<"the pointer itself is "<<ptr<<endl<<endl;

    cout<<"the size of integer is "<<sizeof(num)<<endl;
    cout<<"the size of pointer is "<<sizeof(ptr)<<endl;
    cout<<"the size of value stored in pointer is "<<sizeof(*ptr)<<endl<<endl;

    //you can initiate a pointer by good practise as
    int *q = 0;
    int num1 = 10;

    //reinstate a pointer as
    q=&num1;
    cout<<"the number accessed through pointer is "<<*q<<endl;
    cout<<"the pointer itself is "<<q<<endl;

}