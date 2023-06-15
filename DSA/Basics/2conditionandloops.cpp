#include <iostream>
using namespace std;

//if else statement along with cin
int main(){
    
    int a,b;

    cout << "Give value of a: "<<endl;
    cin >> a;

    cout << "Give value of b: "<<endl;
    cin >> b;

    if(a>b){
        cout<<"Motha zhala va number";
    }
    if(a<b){
        cout<<"chotu zhatu"<<endl;
    }

}

//while Loop
int main(){
  int n;
  cout<<"till where do you want the numbers: ";
  cin>>n;

  int i=1;
  while(i<=n){
    cout<<i<<endl;
    i=i+1;
  }
}