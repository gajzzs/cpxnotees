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
    
    vector<int> v = {0,1,2,3,4};
    vector<pair<int,int>> e = {{0, 1}, {0, 2}, {1, 3}, {1, 4}, {2, 4}, {2, 3}, {3, 4}};
    
    int atMat[v.size()][v.size()] = {};
    
    for (auto &[node1, node2]:e){
        atMat[node1][node2]=1;
    }
    
    // for (int i=0;i<5;i++){
    //     for (int j=0;j<5;j++){
    //         cout << atMat[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    
    queue<int> quel;
    map<int, int> visited;
    
    for (auto ve: v){
        visited[ve] = 0;
    }
    
    quel.push(0);
    visited[0]=1;
    
    while(!quel.empty()){
        
        int que = quel.front();
        quel.pop();
        
       for (int i=0;i<5;i++){
           
           visited[que]=1;
           if (atMat[que][i]==1){
               quel.push(i);
           }
        }
        cout << endl;
        
    }
    
    for (auto &[node, trye]: visited){
        cout << node << " " << trye << "\n";
    }
    
    
    
    
	return 0;
}
