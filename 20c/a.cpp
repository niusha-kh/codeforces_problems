//khodaya komak;
#include <bits/stdc++.h>
using namespace std;

#define int long long int

const int MAXN = 1e5 + 5, INF = 1e18;
int dis[MAXN], n, m, par[MAXN];
vector <pair <int, int> > adj[MAXN];
vector <int> ans;
set <pair <int, int> > s;

void djk(int h){
    dis[h] = 0;
    for(int i = 1; i <= n; i++){
        s.insert(make_pair(dis[i], i));
    }
    while(!s.empty()){
        pair <int, int> it;
        it = *s.begin();
        int u = it.second;
        s.erase(it);
        for(int i = 0; i < adj[u].size(); i++){
            int v = adj[u][i].first;
            int w = adj[u][i].second;
            if(dis[v] > dis[u] + w){
                s.erase(make_pair(dis[v], v));
                par[v] = u;
                dis[v] = dis[u] + w;
                s.insert(make_pair(dis[v], v));
            }
        }
    }
    return;
}
int32_t main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int u, v, z;
        cin >> v >> u >> z;
        adj[u].push_back({v, z});
        adj[v].push_back({u, z});
    }
    fill(dis, dis + n + 1, INF);
    fill(par, par + n + 1, -1);
    djk(1);
    if(dis[n] == INF){
        cout << -1 << endl;
        return 0;
    }
    int e = n;
    while(e >= 1){
        ans.push_back(e);
        e = par[e];
    }
    for(int i = (int)ans.size() - 1; i >= 0; i--){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
