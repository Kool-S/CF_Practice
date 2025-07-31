//find 1st non divisible int either from left or right
#include <bits/stdc++.h>
using namespace std;

void solve() {
   int n,x;
   cin>>n>>x;
   int sum=0;
   
   int l=-1, r;
   for(int i=0;i<n;i++){
       int a;
       cin>>a;
       a=a%x;
       if(a) {
           if(l==-1) l=i;
           r=i;
       }
       sum+=a;
   }
   if(sum%x) cout<<n;
   else if(l==-1) cout<<-1;
   else cout<<n-min(l+1,n-r);
   
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
