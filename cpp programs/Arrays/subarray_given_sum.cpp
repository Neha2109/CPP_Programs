/*Given an unsorted array A of size N of non-negative integers, find a continuous
subarray which adds to a given number S..*/


#include "bits/stdc++.h"
#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n,s;
    cout<<"enter size of array"<<endl;
    cin>>n;
     cout<<"enter sum of subarray required"<<endl;
    cin>>s;
    int a[n];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  int i=0,j=0,st=-1,en=-1,sum=0;
 while(j<n && sum+a[j]<=s){
     sum+=a[j];
     j++;
 }
if(sum==s){
    cout<<i+1<<" "<<j;
    return 0;
}

while(j<n){

    sum+=a[j];
    while(sum>s)
    {
        sum-=a[i];
        i++;
    }
    if(sum==s){
        st=i+1;
        en=j+1;
        break;
    }
    cout<<st<<" "<<en;
}  
    cout<<st<<" "<<en;

return 0;
}