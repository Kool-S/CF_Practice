//my soln- Accepted
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
        if(x==0) sum++;
    }
    cout<<sum;
}


int main() {
    
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<endl;
    }
    return 0;
}
