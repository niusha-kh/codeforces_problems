#include <bits/stdc++.h>
using namespace std;

char i, s;

int main(){
	while(i != '?'){
		cin >> i;
		if(i != '?') s = i;
	}
	if(s >= 'A' && s <= 'Z') s = s - 'A' + 'a';
	if(s == 'a' || s == 'e' || s == 'i' || s == 'u' || s == 'o' || s == 'y') cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
