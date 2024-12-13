#include <bits/stdc++.h>
using namespace std;

int n, arr[105], brr[105];

int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int res = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] != arr[i - 1]){
			brr[res] = arr[i];
			res++;
		}
	}
	if(res <= 1) cout << "NO" << endl;
	else cout << brr[1] << endl;
	return 0;
}
