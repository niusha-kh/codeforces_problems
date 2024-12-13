#include <bits/stdc++.h>
using namespace std;

int y, w, a, b, m;

int main(){
	cin >> y >> w;
	m = max(y, w);
	a = 6 - m + 1;
	b = 6;
	for(int i = 2; i <= 6; i++){
		if(a % i == 0 && b % i == 0){
			a /= i;
			b /= i;
		}
	}
	cout << a << "/" << b << endl;
}
