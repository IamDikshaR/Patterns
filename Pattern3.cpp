#include<bits/stdc++.h>
using namespace std;

//*             *
//   *      *
//       *
//   *      *
//*             *

int main(){
 int n;
 cout<<"Enter n ";
 cin>>n;
 int limit1, limit2, space;
 limit1=n/2;
 if(n%2!=0){
    limit1= limit1+1;
    limit2=n-1;
    space=2;
    for(int i=1; i<=limit1; i++){
        //to print upper part of pattern
      for(int j=1; j<i; j++ ){
        cout<<"\t";
      }
      cout<<"*";
      for(int j=1; j<=limit2 ;j++){
       cout<<"\t";
      }    
      if(limit2>=2){
        cout<<"*";
      }
      limit2=limit2-2;
      cout<<endl;
      }
    for(int i=1; i<limit1; i++){
        //to print lower part of pattern
      for(int j=(limit1-1); j>i; j--){
         cout<<"\t";
        }
      cout<<"*";
      for(int j=1; j<=space ;j++){
       cout<<"\t";
      }
      space=space+2;
      cout<<"*";
      cout<<endl;
    }
  }
  else{
    limit2=n-1;
    space=1;
    for(int i=1; i<=limit1; i++){
        //to print upper part of pattern
      for(int j=1; j<i; j++ ){
        cout<<"\t";
      }
      cout<<"*";
      for(int j=1; j<=limit2 ;j++){
       cout<<"\t";
      }    
      if(limit2>=1){
        cout<<"*";
      }
      limit2=limit2-2;
      cout<<endl;
      }
    for(int i=1; i<=limit1; i++){
        //to print lower part of pattern
      for(int j=limit1; j>i; j--){
         cout<<"\t";
        }
      cout<<"*";
      for(int j=1; j<=space ;j++){
       cout<<"\t";
      }
      space=space+2;
      cout<<"*";
      cout<<endl;
    }
  }
}
