#include<bits/stdc++.h>
using namespace std;


//Hourglass(inverted)
//  *   *   *   *   *   *   *
//      *   *   *   *   *
//          *   *   *
//              *
//          *       *
//      *               *
//  *   *   *   *   *   *   *

int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    int limit1, limit2, space1, space2;
    limit1=n/2;
    if(n%2!=0){
      cout<<endl;
      space1=1;
      limit2=n;
      space2=2;
      for(int i=1; i<=limit1; i++){
        //to print upper half(full)
        for(int j=1; j<space1; j++){
          // to print space before first star
          cout<<"\t";
        }
        space1+=1;
        for(int j=1; j<=limit2; j++){
          //to print series of stars
          cout<<"*\t";
        }
        limit2-=2;
        cout<<endl;
      }
       //to print mid star
      space1-=1;
      for(int i=1; i<=space1; i++){
        cout<<"\t";
      }
      cout<<"*";
      cout<<endl;
      space1-=1;
      for(int i=1; i<limit1; i++){
        //to print lower half(empty)
        for(int j=1; j<=space1; j++){
          //to print space before first star
          cout<<"\t";
        }
        space1-=1;
        cout<<"*";
        for(int j=1; j<=space2; j++){
          cout<<"\t";
        }
        cout<<"*";
        space2+=2;
        cout<<endl;
      }
    for(int i=1; i<=n; i++){
      //to print last line
       cout<<"*\t"; 
      }
    }
    else{
      cout<<"The entered number must be odd";
      return 0;
    }
}


