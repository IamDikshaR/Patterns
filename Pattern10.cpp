#include<bits/stdc++.h>
using namespace std;


//Hourglass(stable)
//*   *    *    *    *    *    *
//    *                   *
//         *         *
//              *
//         *    *    *
//     *   *    *    *    *
//*    *   *    *    *    *    *

int main(){
    int n;
    cout<<"Enter n";
    cin>>n;
    int limit1, limit2, space1, space2;
    limit1=n/2;
          if(n%2!=0){
      for(int i=1; i<=n; i++){
        //to print first line
       cout<<"*\t"; 
      }
      cout<<endl;
      limit2=3;
      space1=1;
      space2=n-2;
      for(int i=1; i<limit1; i++){
        //to print upper half(empty) 
        for(int j=1; j<=space1; j++){
          //to print space before first star
          cout<<"\t";
        }
        space1+=1;
        cout<<"*";
        for(int j=1; j<space2; j++){
         //to give space between 2 stars 
         cout<<"\t"; 
        }
        cout<<"*";
        space2-=2;
        cout<<endl;
      }
      //to print mid star
      for(int i=1; i<=space1; i++){
        cout<<"\t";
      }
      cout<<"*";
      cout<<endl;
      space1-=1;
      for(int i=1; i<=limit1; i++){
        //to print lower half(full)
        for(int j=1; j<=space1; j++){
          //to print space beffore first star
          cout<<"\t";
        }
        space1-=1;
        for(int j=1; j<=limit2; j++){
          //to print stars in series 
          cout<<"*\t";
        }
        limit2+=2;
        cout<<endl;
      }
    }
     else{
      cout<<"The entered number must be odd";
       return 0;
     }