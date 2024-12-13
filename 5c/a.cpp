//do do ro do do do steve!:b
#include <bits/stdc++.h>
using namespace std;

int ans, cnt = 1, arr[10000005], mx;
string str;
vector <int> vec;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> str;
	for(int i = 0; i < str.size(); i++){
		if(str[i] == '('){
			vec.push_back(i);
		}
		else{
			if(!vec.empty()){
				arr[i] = (i - vec.back() + 1);
				if(vec.back()!= 0) arr[i] += arr[vec.back() - 1];
				if(mx == arr[i]) cnt++;
				else if(arr[i] > mx){
					mx = arr[i];
					cnt = 1;
				}
				vec.pop_back();
			}
		}
	}
	cout << mx << " " << cnt << endl;
	return 0;
}
