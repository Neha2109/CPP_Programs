

//in this approach elements with negative value of cumulative sum in currsum array are replaced by 0 and cumulative sum is proceeded with value 0 instead of that negative number and max value is found from
// time complexity O(n)

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


int currentsum=0;

int maxsum=INT_MIN;
  for(int i=0;i<n;i++){
currentsum+=a[i];
if(currentsum<0){
    currentsum=0;
}
          maxsum=max(maxsum,currentsum);
      }
  
  cout<<maxsum;
return 0;
}