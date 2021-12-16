#include<iostream>
#include<climits>
using namespace std;
int main(){

    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max_no = INT_MIN;
    int min_no = INT_MAX;
    for(int i=0;i<n;i++){
        max_no=max(max_no,arr[i]);
         min_no=min(min_no,arr[i]);
    }
cout<<"maximum element  "<<max_no<<endl;
cout<<"minimum element  "<<min_no;
return 0;
}