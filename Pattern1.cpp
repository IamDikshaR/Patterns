#include<bits/stdc++.h>
using namespace std;

//*          *
//*  *    *  *
//*    *     *
//*          *
//*          *

int main(){
 int n;
 n=5;
 int limit1, limit2, space;
 limit1= n/2;
 space=n-1;
 limit2=2;
    //to print first line
    cout<<"*";
    for(int i=1; i<=space; i++){
      cout<<"\t";
    }
    cout<<"*";
  cout<<endl;
    for(int i=1; i<limit1; i++){
    //for printing upper half of pattern 
    cout<<"*";
    for(int j=(limit1-1); j>=i; j--){
     //for space between first two stars 
      cout<<"\t";
    }
    cout<<"*";
    for(int j=1; j<=limit2; j++){
     //for space after first two star
     cout<<"\t";
    }
    cout<<"*";
    limit2+=2;
    for(int j=(limit1-1); j>=i; j--){
     //for space between last two stars
      cout<<"\t";
    }
    cout<<"*";
    cout<<endl;
  }
    //to print point(23-35)
  cout<<"*";
  for(int i=1; i<=limit1; i++){
    //for space between 3 stars(point)
    cout<<"\t";
  }
  cout<<"*";
  for(int i=1; i<=limit1; i++){
    //for space between 3 stars(point)
    cout<<"\t";
  }
  cout<<"*";
  cout<<endl;
  for(int i=1; i<=limit1; i++){
    //to print lower half of pattern
    cout<<"*";
    for(int j=1; j<=space; j++){
    //for space after first star
      cout<<"\t";
    }
    cout<<"*";
    cout<<endl;
  }
}
