#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>arr;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    if(k>1) cout<<"yes";
    else {
        
        for(int i=1; i<n; i++){
            if(arr[i]<arr[i-1]){
                cout<<"no";
                return;
            }
        }
        cout<<"yes";
    }
}
int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
        cout<<"\n";
    }
}
