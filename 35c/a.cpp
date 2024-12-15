#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MAXN = 2e3, INF = 1e9 + 7;
int n, m, k, dis[MAXN][MAXN];
queue <pair<int, int> > q;

int32_t main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n >> m >> k;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            dis[i][j] = INT_MAX;
        }
    }
    for(int i = 0; i < k; i++){
        int x, y;
        cin >> x >> y;
        q.push(make_pair(--x, --y));
        dis[x][y] = 0;
    }
    while(q.size()){
        int j = q.front().second;
        int i = q.front().first;
        if(i - 1 >= 0 && dis[i - 1][j] > dis[i][j] + 1){
            dis[i - 1][j] = dis[i][j] + 1;
            q.push({i - 1, j});
        }
        if(j - 1 >= 0 && dis[i][j - 1] > dis[i][j] + 1){
            dis[i][j - 1] = dis[i][j] + 1;
            q.push({i, j - 1});
        }
        if(j + 1 < m && dis[i][j + 1] > dis[i][j] + 1){
            dis[i][j + 1] = dis[i][j] + 1;
            q.push({i, j + 1});
        }
        if(i + 1 < n && dis[i + 1][j] > dis[i][j] + 1){
            dis[i + 1][j] = dis[i][j] + 1;
            q.push({i + 1, j});
        }
        q.pop();
    }
    int mx = INT_MIN;
    pair <int, int> ind;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(dis[i][j] > mx){
                mx = dis[i][j];
                ind.first = i;
                ind.second = j;
            }
        }
    }
    cout << ind.first + 1 << " " << ind.second + 1 << endl;
    return 0;
}
