#include<iostream>
#include<climits>
using namespace std;

int Sort(int arr[],int n){
for(int i=0;i<n-1;i++){
for(int j=i+1;j<n;j++){
    if(arr[j]>arr[i]){
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
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
    Sort(arr,n);
 cout<<"sorted elements of array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

return 0;
}