#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> calc_pos(pair<int,int>pos, pair<int,int>dirn){
    int x=dirn.first;
    int y=dirn.second;
    vector<pair<int,int>>ans;
    vector<int>dx={x, x, -x, -x, y, y, -y, -y};
    vector<int>dy={y, -y, -y, y, x, -x, -x, x};
    for(int i=0; i<8; i++){
        pair<int,int>curr={pos.first+dx[i], pos.second+dy[i]};
        ans.push_back(curr);
    }
    return ans;
}
void solve() {
    pair<int,int>start;
    pair<int,int>king;
    pair<int,int>queen;
    
    
    for(int i=0; i<3; i++){
      int x, y;
      cin>> x;
      cin>>y;
      switch(i){
        case(0): 
            start.first=x;
            start.second=y;
            break;
        case(1): 
            king.first=x;
            king.second=y;
            break;
        case(2): 
            queen.first=x;
            queen.second=y;
            break;
      }
    }
    vector<pair<int,int>>king_pos=calc_pos(king,start) ;
    vector<pair<int,int>>queen_pos=calc_pos(queen,start);
    
    vector<pair<int,int>>ans;
    for(auto pos: king_pos){
        auto it = find(queen_pos.begin(), queen_pos.end(), pos);
        if(it!=queen_pos.end()) {
            auto ite=find(ans.begin(),ans.end(),pos);
            if (ite==ans.end()) ans.push_back(pos);
            
        }
        
    }
    cout<<ans.size();
    
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
        cout << endl;
    }
    return 0;
}
