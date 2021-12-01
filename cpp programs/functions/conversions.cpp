#include <iostream>

#include <math.h>
using namespace std;

int binaryToDecimal(int num)
{
   int ans=0,x=1;
    while(num!=0){
        int digit=num%10;
        ans+=x*digit;
        x*=2;
        num/=10;
    }
    return ans;
}

int octalToDecimal(int num)
{
   int ans=0,x=1;
    while(num!=0){
        int digit=num%10;
        ans+=x*digit;
        x*=8;
        num/=10;
    }
    return ans;
}

int hexadecimalToDecimal(string n)
{
   int ans=0,x=1;
    int s=n.size();
    for(int i=s-1;i>=0;i--)
    {
        if(n[i]>='0' && n[i]<='9')
        {
            ans+=x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F')
        {
            ans+=x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return ans;
}


int32_t main(){
    int n;
    cout<<"enter binary no.";
    cin>>n;
   cout<<binaryToDecimal(n)<<endl;
   int k;
      cout<<"enter octal no.";
    cin>>k;
      cout<<octalToDecimal(k)<<endl;
    string s;
      cout<<"enter string no.";
    cin>>s;
      cout<<hexadecimalToDecimal(s)<<endl;
}