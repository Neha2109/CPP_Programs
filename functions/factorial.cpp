#include <iostream>
#include <math.h>
using namespace std;

int fact(int num)
{
   int fact=1;
    for(int i=1;i<=num;i++)
{
fact*=i;
}
return fact;
}
int main(){
    int b;
    cin>>b;
    int ans=fact(b);
    cout<<ans;
    return 0;
}