#include <iostream>
using namespace std;

int main(){
  int n=5;

  int i=0;
  while(i<n){
    int j=0;
    while(j<n){
      cout<<"*";
      j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
  cout<<endl;

  int i1=0;
  while(i1<n){
    int j1=1;
    while(j1<=n){
      cout<<n-j1+1;
      j1=j1+1;
    }
    cout<<endl;
    i1=i1+1;
  }
  cout<<endl;

  int i2=0;
  while(i2<n){
    int j2=1;
    while(j2<=n){
      cout<<j2;
      j2=j2+1;
    }
    cout<<endl;
    i2=i2+1;
  }
  cout<<endl;

  int i3=0;
  int count0=1;
  while(i3<n){
    int j3=1;
    while(j3<=n){
      cout<<count0<<" ";
      count0=count0+1;
      j3=j3+1;
    }
    cout<<endl;
    i3=i3+1;
  }
  cout<<endl;

  int i4=0;
  while(i4<=n){
    int j4=1;
    while(j4<=i4){
      cout<<"*"<<" ";
      j4=j4+1;
    }
    cout<<endl;
    i4=i4+1;
  }
    cout<<endl;

  int i5=0;
  while(i5<=n){
    int j5=1;
    while(j5<=i){
      cout<<i5<<" ";
      j5=j5+1;
    }
    cout<<endl;
    i5=i5+1;
  }
  cout<<endl;
 
  int i6=0;
  int count=1;
  while(i6<=n){
    int j6=1;
    while(j6<=i){
      cout<<count<<" ";
      j6=j6+1;
      count=count+1;
    }
    cout<<endl;
    i6=i6+1;
  }
  cout<<endl;

  // int i7=0;
  // while(i7<=n){
  //   int j7=1;
  //   while(j7<=i){
  //     cout<<i7-j7+1<<" ";
  //     j7=j7+1;
  //   }
  //   cout<<endl;
  //   i=i+1;
  // }
  // cout<<endl;

  int i8=1;
  while(i8<=n){
    char ch='A'+i8-1;
    int j8=1;
    while(j8<=n){
      cout<<ch<<" ";
      j8=j8+1;
    }
    cout<<endl;
    i8=i8+1;
  }
  cout<<endl;

    int i9=1;
  while(i9<=n){
      int j9=1;
      char ch1='A'+j9-1;
    while(j9<=n){
      cout<<ch1<<" ";
      ch1=ch1+1;
      j9=j9+1;
    }
    cout<<endl;
    i9=i9+1;
  }
  cout<<endl;

    int i10=1;
  char ch2='A';
  while(i10<=n){
      int j10=1;
      while(j10<=n){
      cout<<ch2<<" ";
      ch2=ch2+1;
      j10=j10+1;
    }
    cout<<endl;
    i10=i10+1;
  }

}

