#include <bits/stdc++.h>
using namespace std;

const int mx = 10000005;
int n, k, ans, arr[mx], num, t;
bool mark[mx];

int main(){
	cin >> n >> k;
	for(int i = 2; i < n; i++){
		for(int j = 2; j < n; j++){
			mark[i * j] = true;
		}
	}
	for(int i = 2; i < n; i++){
		if(!mark[i]){
			arr[num] = i;
			num++;
		}
	}
	for(int i = 0; i <= n; i++){
		t = arr[i] + arr[i + 1] + 1;
		if(!mark[t] && t <= n && t != 1){
			ans++;
		}
	}
	if(ans >= k) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
