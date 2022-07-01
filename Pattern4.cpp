#include<bits/stdc++.h>
using namespace std;

//      *
//   *     *
//*            * 
//   *     *
//      *

int main(){
 int n;
 cout<<"Enter n ";
 cin>>n;
 int space, limit1;
 limit1= n/2;
  if (n%2!=0){
    limit1=limit1+1;
    space=0;
    for(int i=1; i<limit1; i++){
      //to print upper half of pattern
      for(int j=limit1; j>i; j--){
        //for space before star
        cout<<"\t";
      }
      cout<<"*";
      for(int j=1; j<=space; j++){
        //for space after first star
        cout<<"\t";
      }
      if(space>1){
        //to check if second star is to be printed
        cout<<"*";
      }
      space+=2;
      cout<<endl;
    }
    space=n-1;
    for(int i=1; i<=limit1; i++){
      //to print lower half pattern
      for(int j=1; j<i; j++){
        //for space before first star
        cout<<"\t";
      }
      cout<<"*";
      for(int j=1; j<=space; j++){
        //for space before second star
        cout<<"\t";
      }
      if(space>=2){
        //to check if second star is to be printed
        cout<<"*";
      }
      space-=2;
      cout<<endl;
    }
  }
  else{
     space=1;
    for(int i=1; i<=limit1; i++){
      //to print upper half of pattern
      for(int j=limit1; j>i; j--){
        //for space before star
        cout<<"\t";
      }
      cout<<"*";
      for(int j=1; j<=space; j++){
        //for space after first star
        cout<<"\t";
      }
      if(space>=1){
        //to check if second star is to be printed
        cout<<"*";
      }
      space+=2;
      cout<<endl;
    }
    space=n-1;
    for(int i=1; i<=limit1; i++){
      //to print lower half pattern
      for(int j=1; j<i; j++){
        //for space before first star
        cout<<"\t";
      }
      cout<<"*";
      for(int j=1; j<=space; j++){
        //for space before second star
        cout<<"\t";
      }
      if(space>=1){
        //to check if second star is to be printed
        cout<<"*";
      }
      space-=2;
      cout<<endl;
    }
  }
}
