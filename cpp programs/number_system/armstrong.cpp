#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int n,sum=0,digit=0;
    cout<<"enter number"<<endl;
    cin>>n;
    int num=n;
    while(n>0)
    {
         digit=n%10;
        sum+=(digit*digit*digit);
        n=n/10;
    }


    if(num==sum)
    {
    cout<<"Armstrong"<<endl;
    }
    else
    {
    cout<<"not armstrong"<<endl;
    }
    
}