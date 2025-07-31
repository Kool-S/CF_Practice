#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s="";
    cin>>s;
    if(s.size()>10){
        string ans="";
        ans+=s[0];
        ans+=to_string(s.size()-2);
        ans+=s[s.size()-1];
        cout<< ans;
    }
    else cout<< s;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
        cout<<"\n";
    }
}
