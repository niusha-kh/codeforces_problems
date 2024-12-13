#include <bits/stdc++.h>
using namespace std;

const int mx = 1e5 + 5;
int n, c, l;
string str;
pair <string, int> arr[mx];
bool km;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> str;
		km = false;
		for(int j = 0; j < c; j++){
			if(arr[j].first == str){
				km = true;
				arr[j].second++;
				l = arr[j].second;
				break;
			}
		}
		if(km){
			cout << str << l << endl;
		}
		else{
			cout << "OK" << endl;
			arr[c].first = str;
			c++;
		}
	}

	return 0;
}
