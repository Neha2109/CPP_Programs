#include <iostream>
using namespace std;
int main(){
    int n,k=0,j=0;
    cin>>n;
    for( int i=2;i<n;i++)
    {
        if(n%i==0)
        k++;
    }
    if(k!=0)
    {
      cout<<"not prime";
    }
    else
    {
            cout<<" prime";
    }
  
    
}