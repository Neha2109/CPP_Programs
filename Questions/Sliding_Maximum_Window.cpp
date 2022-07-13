#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>win;
    for(int i=0;i<n-k;i++){
        int ans=0;
        for(int j=i;j<i+3;j++){
              ans=max(ans,arr[j]);
        }
        win.push_back(ans);
    }
for(auto &i:win){
        cout<<i<<"\t";
    }

}