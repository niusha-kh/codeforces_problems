#include <bits/stdc++.h>
using namespace std;

int n, m, arr[105], ans;

int main(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for(int i = 0; i < m; i++){
		if(arr[i] < 0){
			ans += arr[i];
		}
	}
	cout << abs(ans) << endl;
	return 0;
}
