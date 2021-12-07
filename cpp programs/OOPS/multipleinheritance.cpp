#include<iostream>
using namespace std;
class A{
    public:
    void funcA(){
        cout<<"inherited A";

    }
};


class B{
    public:
    void funcB(){
        cout<<"inherited B";

    }
};

class C:public A, public B{


};
int main(){
    C c;
c.funcA();
c.funcB();
}