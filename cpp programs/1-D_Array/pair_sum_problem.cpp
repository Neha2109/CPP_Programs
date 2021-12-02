//works for sorted array


#include "bits/stdc++.h"
#include<iostream>
#include<climits>
using namespace std;
bool pairsum(int a[],int n, int k){
   int low=0;int high=n-1;
while(low<high){
    if(a[low]+a[high]==k){
        cout<<low<<" "<<high<<endl;
        return true;
            }
            else if(a[low]+a[high]>k){
                high--;
            }
            else{
                low++;
            }
}
return false;
}
int main(){

    int n,k;
    cout<<"enter size of array"<<endl;
    cin>>n;
     cout<<"enter sum value"<<endl;
    cin>>k;
    int a[n];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
  cout<<pairsum(a,n,k);

return 0;
}