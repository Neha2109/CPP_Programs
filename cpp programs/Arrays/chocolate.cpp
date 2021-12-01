#include<iostream>
#include<climits>
using namespace std;

int chocolates(int c){

if(c<3)
return 0;

int n=c/3;
return n+ chocolates(n+c%3);

     }

    

int main(){

    int c;
    cout<<"enter number of chocolates"<<endl;
    cin>>c;
    cout<<c+chocolates(c);


return 0;
}