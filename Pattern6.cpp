#include<bits/stdc++.h>
using namespace std;

//          1
//      2   3   2
//  3   4   5   4   3
//      2   3   2
//          1


int main(){
  int n, limit1, limit2, space;
  cout<<"Enter n ";
  cin>>n;
  limit1=n/2;
  if(n%2!=0){
    limit2=1;
    space=limit1;
    limit1 =limit1+1;
    for(int i=1; i<=limit1; i++){
      //to run upper half of the pattern
      int k=i;
      int m;
      for(int j=1; j<=space;j++){
        //to print space before first term
        cout<<"\t";
      }
      space-=1;
      for(int j=1; j<=limit2; j++){
        //to print the terms
        if(j>i){
          // to print decreament
          m=m-1;
          cout<<m<<"\t";
        }
        else{
          // to print increament
         m=k;
         cout<<k<<"\t";
         k+=1;
        }
      }
    limit2+=2;
    cout<<endl;
    }
    space=1;
    limit2=n-2;
    for(int i=1; i<limit1; i++){
      //to run lower half of pattern
      int k,m;
      for(int j=1; j<=space; j++){
        //to print space before first term
        cout<<"\t";
      }
      space+=1;
      k=(limit2/2)+1;
      for(int j=limit2; j>=1; j--){
        //to print the terms  
        if(j<((limit2/2)+1)){
          // to print decreament
          m=m-1;
          cout<<m<<"\t";
        }
        else{
          //to print increamnt
          m=k;
          cout<<k<<"\t";
          k+=1;
        }
      }
      limit2-=2;
      cout<<endl;
    }
  }
   else{
    cout<<"The pattern cannot be printed with this n, please input odd n";
  }
}