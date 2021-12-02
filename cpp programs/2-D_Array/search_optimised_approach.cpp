
// works for only sorted rows ans columns in ascending order
#include "bits/stdc++.h"
#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n,m,s;
    cout<<"enter rows in array"<<endl;
    cin>>n;
    cout<<"enter columns in array"<<endl;
    cin>>m;
    cout<<"enter search key"<<endl;
    cin>>s;
    int a[n][m];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

        cin>>a[i][j];
                }
    }
 
  int r=0,c=n-1;
  bool found=false;
  while(r<m && c>=0){

      if(a[r][c]==s){
          found=true;
      }
          
      a[r][c]>s?c--:r++;
  }
  if(found){
      cout<<"found";

  }
  else{
      cout<<"not found";
  }
return 0;
}