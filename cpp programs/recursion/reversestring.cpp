#include<iostream>
#include<algorithm>
using namespace std;

void rev(string s){

    if(s.length()==0)
    {
        return ;
    }
    string rest=s.substr(1);
    rev(rest);
cout<<s[0];
}

int main(){
     string s;cin>>s;
   rev(s);
    return 0;
}