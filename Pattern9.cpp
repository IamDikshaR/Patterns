#include<bits/stdc++.h>
using namespace std;

//to print binomial tree

int combination(int n, int r){
  int c, num, den1, den2;
  num=1;
  den1=1;
  den2=1;
  for(int i=1; i<=n; i++){
    num=num*i;
  }
  for(int i=1; i<=(n-r); i++){
    den1=den1*i;
  }
  for(int i=1; i<=r; i++){
    den2= den2*i;
  }
  c=num/(den1*den2);
  return c;
}

int main(){
    int n;
  cout<<"Enter n- ";
  cin>>n;
  for(int i=0; i<=n; i++){
    for(int j=0; j<=i; j++){
     cout<<combination(i,j)<<"\t";
    }  
    cout<<endl;
  }
}