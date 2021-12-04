#include<iostream>
using namespace std;

void subseq(string s,string ans="")
{

    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
char ch=s[0];
string ros=s.substr(1);

subseq(ros,ans);
subseq(ros,ans+ch);
}


void subseqASCII(string s,string ans="")
{

    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
char ch=s[0];
int code=ch;
string ros=s.substr(1);

subseqASCII(ros,ans);
subseqASCII(ros,ans+ch);
subseqASCII(ros,ans+to_string(code));

}
int main(){
subseq("abc","");
   subseqASCII("AB","");

    return 0;
}