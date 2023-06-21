#include <iostream>
using namespace std;
#include <limits.h>

int gcd(int a, int b){

    if (a==0){
        return b;
    }

    if (b==0){
        return a;
    }

    while(a!=b){
        
        if(a<b){
            b=b-a;
        }
        else a=a-b;
    }
    return a;
}

int main(){
    cout<<gcd(24,72)<<endl;
}