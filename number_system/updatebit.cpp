#include<iostream>
using namespace std;

int update(int n, int pos,int value){
int mask=~(1<<pos);
n=n&mask;
return (n|(value<<pos));
    
}

int main(){
    cout<<update(5,1,1);
    return 0;
}