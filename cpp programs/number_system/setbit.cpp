//set is to add 1 and unset is to add 0
#include<iostream>
using namespace std;

int setBit(int n, int pos){

    return((n |(1<<pos)));
}

int main(){
    cout<<setBit(5,1);
    return 0;
}