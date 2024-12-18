#include <bits/stdc++.h>
using namespace std;

int n, ans2;
int ans = 1;
string str, str1, str2;

int main(){
	cin >> n;
	cin >> str1;
	for(int i = 1; i < n; i++){
		cin >> str;
		if(str == str1){
			ans++;
		}
		else{
			str2 = str;
			ans2++;
		}
	}
	if(ans > ans2){
		cout << str1 << endl;
	}
	else{
		cout << str2 << endl;
	}

	return 0;
}
