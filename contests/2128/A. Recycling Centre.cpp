#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n,c;
   cin>>n>>c;
   int cnt=0;
   map<int,int>mp;
   for(int i=0; i<n; i++){
       int x;
       cin>>x;
       if(c/x>=1) mp[log2(c/x)]++;
       else cnt++;
   }
   int it=0;
   for(auto el:mp){
       if(el.first<it) cnt+=el.second;
       else{
           cnt+=max(0,el.second-(el.first+1-it));
           it+=min(el.second,el.first+1-it);
           
       }
   }
   cout<<cnt;
}

int main() {
    
    int T;
   cin>>T;
   while(T--){
       solve();
       cout<<endl;
       
   }
    return 0;
}
