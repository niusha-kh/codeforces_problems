#include <bits/stdc++.h>
using namespace std;

pair <string, string> arr[2000005];
int n, ans;
bool mark;

int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i].first >> arr[i].second;
		for(int j = 0; j < i; j++){
			if(arr[j].first == arr[i].first && arr[j].second == arr[i].second){
				mark = true;
			}
		}
		if(!mark) ans++;
		mark = false;
	}
	cout << ans << endl;
	return 0;
}
