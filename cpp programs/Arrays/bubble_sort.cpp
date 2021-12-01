#include<iostream>
#include<climits>
using namespace std;

int Sort(int arr[],int n){
    int counter=1;
    while(counter<n-1){
for(int i=0;i<n-counter;i++){
    if(arr[i]>arr[i+1]){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}
counter++;
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
    Sort(arr,n);
 cout<<"sorted elements of array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

return 0;
}