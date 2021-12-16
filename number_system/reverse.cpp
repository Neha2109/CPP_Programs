#include <iostream>
using namespace std;
int main(){
    int n,k=0,j=0,rev=0;
    cout<<"enter number"<<endl;
    cin>>n;
    int num=n;
    while(num!=0)
    {
        int digit=num%10;
        rev=rev*10+digit;
        num=num/10;
    }
    cout<<"reverse="<<rev;
  
    
}