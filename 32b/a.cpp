#include <bits/stdc++.h>
using namespace std;

string str;

int main(){
	cin >> str;
	for(int i = 0; i < str.size(); i++){
		if(str[i] != 0){
			if(str[i] == '-' && str[i + 1] == '.'){
				cout << 1;
				str[i + 1] = 0;
			}
			else if(str[i] == '.'){
				cout << 0;
			}
			else if(str[i] == '-' && str[i + 1] == '-'){
				cout << 2;
				str[i + 1] = 0;
			}
		}
		
	}
	cout << endl;
	return 0;
}
