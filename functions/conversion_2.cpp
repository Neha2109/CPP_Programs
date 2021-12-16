#include <iostream>

#include <math.h>
using namespace std;

int decimalToBinary(int num)
{
   int ans=0,x=1;
    while(x<=num){
       
        x*=2;
    }
        x/=2;
        while(x>0){
             int digit=num/x;
        num-=x*digit;
        x/=2;
        ans=ans*10+digit;
        }
    
    return ans;
}

int DecimalToOctal(int num)
{
    int ans=0,x=1;
    while(x<=num){
       
        x*=8;
    }
        x/=8;
        while(x>0){
             int digit=num/x;
        num-=x*digit;
        x/=8;
        ans=ans*10+digit;
        }
    
    return ans;
}

string DecimalTohexadecimal(int n)
{
   string ans="";
   int x=1;
    while(x<=n){
    x*=16;
    }
    x/=16;
    while(x>0){
        int digit=n/x;
        n-=digit*x;
        x/=16;

    if(digit<=9){
        ans=ans+to_string(digit);
    }
    else{
        char c='A'+digit-10;
        ans.push_back(c);
    }}
    return ans;


}
int32_t main(){
    int n;
    cout<<"enter decimal no.";
    cin>>n;
   cout<<decimalToBinary(n)<<endl;
   int k;
      cout<<"enter decimal no.";
    cin>>k;
      cout<<DecimalToOctal(k)<<endl;
    int s;
      cout<<"enter decimal no.";
    cin>>s;
      cout<<DecimalTohexadecimal(s)<<endl;
}