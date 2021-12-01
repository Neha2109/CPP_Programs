









/*Find the smallest positive missing number in the given array.
Example: [0, -10, 1, 3, -20], Ans = 2*/

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

    const int N = 1e6+2;
  bool check[N];
 for(int i=0;i<N;i++){
        check[i]=0;
    }

  for(int i=0;i<n;i++){
        if(a[i]>=0){
            check[a[i]]=1;
        }
    }
int ans =-1;

     for(int i=0;i<N;i++){
        if(check[i]==false){
             ans=i;
             break;
        }
    }
    cout<<ans;
return 0;
}