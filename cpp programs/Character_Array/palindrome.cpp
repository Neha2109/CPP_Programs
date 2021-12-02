#include<iostream>
using namespace std;


    

int main(){

    int n;
    bool check=1;
    cout<<"enter the length"<<endl;
    cin>>n;
    char a[n+1];
        cout<<"enter the word"<<endl;

    cin>>a;
   for(int i=0;i<n;i++){
       if(a[i]!=a[n-1-i]){
           check=0;
           break;

       }
   }
if(check==true){
    cout<<"palindrome"<<endl;
}
else
cout<<"not a palindrome"<<endl;

return 0;
}