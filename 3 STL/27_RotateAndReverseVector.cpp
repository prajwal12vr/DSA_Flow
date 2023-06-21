#include <iostream>
#include <vector>
using namespace std;
#include <climits>
#include <bits/stdc++.h>

//using STL library

int main(){
  vector<int>v;

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);

  for(int i:v){
    cout<<i<<" ";
  }
  cout<<endl;

  reverse(v.begin(),v.end());

  for(int i:v){
    cout<<i<<" ";
  }
  cout<<endl;

  rotate(v.begin(),v.begin()+2,v.end());

  for(int i:v){
    cout<<i<<" ";
  }
  cout<<endl;
 
}