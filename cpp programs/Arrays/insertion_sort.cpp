#include<iostream>
#include<climits>
using namespace std;

int Sort(int arr[],int n){
for(int i=1;i<n;i++){
int current=arr[i];
int j=i-1;
while(arr[j]>current && j>=0){
    arr[j+1]=arr[j];
    j--;
}
arr[j+1]=current;
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