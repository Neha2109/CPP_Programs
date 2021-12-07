#include<iostream>
using namespace std;

class A{
public: //can be accessed outside class also

int a;
void funcA(){

    cout<<"funcA\n";
}

private: //cannot be accessed outside class

int b;
void funcB(){

    cout<<"funcB\n";
}

protected: //can be accessed in class nas inherited class

int c;
void funcC(){

    cout<<"funcC\n";
}

};


int main(){

    A obj;
    obj.funcA();
    obj.funcB();
}