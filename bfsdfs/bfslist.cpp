#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define ld long double 
#define fi first 
#define se second 
#define mp make_pair 
#define pb push_back 
#pragma GCC optimize(1)
#define eb emplace_back 
#define pll pair<long long ,long long > 
#define ppll pair < pll , pll > 
#pragma GCC optimize(2)
#define sd(x) scanf("%d",&x) 
#define sld(x) scanf("%lld",&x) 
#define INF 1e18 
#define eps 0.00001 
#define le length 
#pragma GCC optimize(3,"Ofast","inline")
#define debug(n1) cout << n1 << endl 
#define rep(i , n) for(ll i = 0 ; i < n ; i++) 
#define per(i , j , n) for(ll i = j ; i >= n ; i--)

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    map<int, vector<int>> AList = {{0, {1, 2}}, {1,{3, 4}}, {2,{4,3}}, {3, {4}}, {4,{}} };
    
    // cout << AList[0][0];
    queue<int> quel;
    map<int, int> visited;
    
    for (auto &[index, list]: AList){
        visited[index] = 0;
    }
    quel.push(0);
    visited[0]=1;
    
    while(!quel.empty()){
        
        int que = quel.front();
        cout << que << "vv \n";
        quel.pop();
        
        for (auto nodes : AList[que]){
            visited[nodes]=1;
            quel.push(nodes);
        }
        
    }
    
    for (auto &[node, trye]: visited){
        cout << node << " " << trye << "\n";
    }
    
    
    
    
	return 0;
}
