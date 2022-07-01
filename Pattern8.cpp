#include<bits/stdc++.h>
using namespace std;

//1                        1
//1   2                2   1
//1   2   3       3    2   1
//1   2   3   4   3    2   1


int main(){
int n;
cout<<"Enter n- ";
cin>>n;    
int limit1, space, limit2;
  limit1=(n*2)-1;
  space=limit1-2;
  for(int i=1; i<=n; i++){
    //to print n lines of pattern
    for(int j=1; j<=i; j++){
      //to print pattern before space
      cout<<j<<"\t";
      limit2=j;
    }
    for(int j=1; j<=space; j++){
      //to print space in middle
      cout<<"\t";
    }
    space-=2;
    for(int j=limit2; j>=1; j--){
      //to print pattern after space
      if(limit2==n){
        limit2-=1;
        j=limit2;
      }
      cout<<j<<"\t";
    }
    cout<<endl;
  }
}