#include<bits/stdc++.h>
using namespace std;

//        *
//    *   *   *
//*   *   *   *   *
//    *   *   *
//        *

int main(){
  int n, limit, print;
  cout<<"Enter number of rows to be printed - ";
  cin>>n;
  limit=n/2;
  if(n%2!=0){
    limit= limit+1;
    print=1;
    for(int i=1; i<=limit; i++){
        //to print upper half of the pattern
      for(int j=limit; j>i; j-- ){
       cout<<"\t";
      }
      for(int j=1; j<=print ;j++){
       cout<<"*"<<"\t";
    }
    print+=2;
    cout<<endl;
   }
   print-=3;
    for(int i=1; i<limit; i++){
        //to print lower half of the pattern
      for(int j=1; j<=i; j++){
       cout<<"\t";
      }
      for(int j=1; j<print ;j++){
       cout<<"*"<<"\t";
    }
    print-=2;
    cout<<endl;
   }
  }
  else{
    print=2;
    for(int i=1; i<=limit; i++){
        //to print upper part of pattern
      for(int j=limit; j>i; j-- ){
       cout<<"\t";
      }
      for(int j=1; j<=print ;j++){
       cout<<"*"<<"\t";
    }
    print+=2;
    cout<<endl;
   }
   print-=2;
    for(int i=1; i<=limit; i++){
        //to print lower part of pattern
      for(int j=1; j<i; j++){
       cout<<"\t";
      }
      for(int j=1; j<=print ;j++){
       cout<<"*"<<"\t";
    }
    print-=2;
    cout<<endl;
   }
  }
