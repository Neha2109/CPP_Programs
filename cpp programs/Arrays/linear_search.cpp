#include<iostream>
#include<climits>
using namespace std;

int linearSearch(int arr[],int n,int key){

      for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }

    }
return -1;
}

int main(){

    int n,key;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 cout<<"enter key"<<endl;
    cin>>key;
    cout<<linearSearch(arr,n,key)<<endl;
return 0;
}