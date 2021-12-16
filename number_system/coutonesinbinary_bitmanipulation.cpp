#include<iostream>
using namespace std;

int ones(int n){
int count=0;
while(n){
n=n&(n-1);
count++;
}

return count;
    
}

int main(){
    cout<<ones(19);
    return 0;
}