#include <iostream>
#include <math.h>
using namespace std;

void fib(int num)
{
    int first=0;
   int second=1;
cout<<first<<endl;
cout<<second<<endl;
    for(int i=1;i<=(num-2);i++)
{
    int third=first+second;
    cout<<third<<endl;
    first=second;
    second=third;

}
}
int main(){
    int b;
    cin>>b;
    fib(b);
}