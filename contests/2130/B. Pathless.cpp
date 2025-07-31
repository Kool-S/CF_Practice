#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n,s;
   cin>>n>>s;
   int sum=0;
   vector<int>vec(3,0);
   for(int i=0; i<n; i++){
       int x;
       cin>>x;
       sum+=x;
       vec[x]++;
   }
   
   if(s==sum|| s-sum>1) cout<<-1;
   else {
       for(int i=0; i<vec[0]; i++){
           cout<<0<<" ";
       }
       for(int i=0; i<vec[2]; i++){
           cout<<2<<" ";
       }
       for(int i=0; i<vec[1]; i++){
           cout<<1<<" ";
       }
   }
   
}

int main() {
    
    int T=1;
   cin>>T;
   while(T--){
       solve();
       cout<<endl;
       
   }
    return 0;
}
