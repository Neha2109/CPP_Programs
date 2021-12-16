
//max subarray sum= total sum of array-sum of non-contributing elements
// sum of non contributing elements is calculated by first inverting signs of elements of original array and then applying kadane's algorithm



#include "bits/stdc++.h"
#include<iostream>
#include<climits>
using namespace std;
int kadane(int a[],int n){
    int currentsum=0;

int maxsum=INT_MIN;
  for(int i=0;i<n;i++){
currentsum+=a[i];
if(currentsum<0){
    currentsum=0;
}
          maxsum=max(maxsum,currentsum);
      }
  
  return maxsum;

}
int main(){

    int n,s;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int wrapsum,nonwrapsum;
     nonwrapsum=kadane(a,n);
int totalsum=0;

  for(int i=0;i<n;i++){
      totalsum+=a[i];
a[i]= -a[i];
 }
  wrapsum=totalsum+kadane(a,n);
  cout<<max(wrapsum,nonwrapsum);

return 0;
}