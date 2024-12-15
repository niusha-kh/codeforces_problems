#include <bits/stdc++.h>
using namespace std;

int n, arr[105], zj, frd;

int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0; i < n; i++){
		if(arr[i] % 2 == 0) zj++;
		else frd++;
	}
	if(zj > frd){
		for(int i = 0; i < n; i++){
			if(arr[i] % 2){
				cout << i + 1 << endl;
				return 0;
			}
		}
	}
	else{
		for(int i = 0; i < n; i++){
			if(arr[i] % 2 == 0){
				cout << i + 1 << endl;
				return 0;
			}
		}
	}
}
