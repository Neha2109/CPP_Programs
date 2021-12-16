#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

 string str;
 cin>>str;
 cout<<str<<endl;
 string str1(5,'n');
cout<<str1;
 string str2;
 getline(cin,str2);
 cout<<str2;


 //  s.clear() ,  s1.append.(s2), s1.compare(s2)
 // s.empty()   , s.erase(pos,no. of char to delete) , s.find("substring")
 // s.insert(2,"substring") s.length(), s.size()
//s.substring(pos,no, of chars) , int x=stoi(s), to_string(x)
//for sorting include algorithm header file ==   sort(s1.begin(),s1.end())
// transfor(s.begin(),s.end(),s.begin(), ::toupper)


//sort

 string s="45542214";
sort(s.begin(),s.end(),greater<int>());
cout<<s;
return 0;
}