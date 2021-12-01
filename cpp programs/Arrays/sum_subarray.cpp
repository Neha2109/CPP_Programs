#include<iostream>
#include<climits>
using namespace std;

int Sum_subarray(int arr[],int n){
    int sum=0;
    cout<<"sum of sub arrays";
for(int i=0;i<n;i++){
    sum=0;
for(int j=i;j<n;j++){
    sum+=arr[j];
    cout<<sum<<endl;
}

}




return 0;

     }

    

int main(){

    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
Sum_subarray(arr,n);
return 0;
}