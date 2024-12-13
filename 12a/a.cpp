#include <bits/stdc++.h>
using namespace std;

char arr[8][8];
int cn;

int main(){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> arr[i][j];
		}
	}
	if(arr[0][0] == arr[2][2]) cn++;
	if(arr[0][1] == arr[2][1]) cn++;
	if(arr[0][2] == arr[2][0]) cn++;
	if(arr[1][0] == arr[1][2]) cn++;
	if(cn == 4) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
