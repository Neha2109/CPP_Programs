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
    for(int i=0;i<b;i++)
    {
      for(int j=0;j<=i;j++)
      {
cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
      }
      cout<<""<<endl;
    }
    return 0;
}