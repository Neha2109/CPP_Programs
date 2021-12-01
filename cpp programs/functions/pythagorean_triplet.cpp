#include <iostream>
#include <math.h>
using namespace std;

bool isTriplet(int a,int b,int c)
{
   int p,q,r;
   p=max(a,max(b,c));
   if(p==a){
       q=b;r=c;
   }
   if(p==b){
       q=a;r=c;
   }
   if(p==c){
       q=a;r=b;
   }
   if(p*p==(q*q+r*r))
   return true;
   else
   return false;
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
if(isTriplet(x,y,z))
{
    cout<<"yes it is triplet";
}
else
{
    cout<<"no it is not triplet";
}
    return 0;
}