#include<iostream>
using namespace std;
class A{
    public:
    void funcA(){
        cout<<"function A";

    }
};


class B:public A{
    public:
    void funcB(){
        cout<<"function B";

    }
};

class C:public B{


};
int main(){
    C c;
c.funcA();
c.funcB();
}