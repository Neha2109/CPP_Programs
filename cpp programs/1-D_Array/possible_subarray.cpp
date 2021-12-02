




#include "bits/stdc++.h"
#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n,s;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }


  for(int i=0;i<n;i++){

      for(int j=i;j<n;j++){
          for(int k=i;k<=j;k++){
              cout<<a[k]<<" ";

          }
          cout<<endl;
      }
  }
return 0;
}