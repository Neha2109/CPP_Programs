#include<iostream>
using namespace std;
class A{
    public:
    void funcA(){
        cout<<"func a A";

    }
    void funcB(int n){
        cout<<"func b";

    }
 void funcC(double d){
        cout<<"func c";

    }

};
int main(){
    A obj;
obj.funcA();
obj.funcB(3);

obj.funcC(6.0);

}