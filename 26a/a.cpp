#include <bits/stdc++.h>
using namespace std;

int n, arr[3000], cnt;
bool prime(int v){
	if(v == 1) return false;
	for(int i = 2; i * i <= v; i++){
		if(v % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	cin >> n;
	for(int i = 1; i < n; i++){
		if(prime(i)){
			for(int j = i; j <= n; j += i){
				arr[j]++;
			}
		}
	}
	for(int i = 1; i <= n; i++){
		if(arr[i] == 2){
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
