#include<iostream>
#include<climits>
using namespace std;   

int main(){

    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=INT_MIN;
 cout<<"Max till i"<<endl;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }

return 0;
}