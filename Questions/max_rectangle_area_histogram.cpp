#include <bits/stdc++.h>
#include<iostream>
using namespace std;










int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0,i=0;
stack <int> st;
a.push_back(0);
    while(i<n){
        while(!st.empty() & a[st.top()]>a[i]){
            int t=st.top();
            int h=a[t];
            st.pop();
            if(st.empty()){
                ans=max(ans,h*i);
            }
            else{
                int len=i-st.top()-1;
                ans=max(ans,h*len);
            }

        }
        st.push(i);
        i++;
    }
    cout<<ans;
}
