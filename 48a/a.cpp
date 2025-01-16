#include <bits/stdc++.h>
using namespace std;

string a, b, c;

int main(){
	cin >> a >> b >> c;
	if(a != b && a != c && b != c){
		cout << "?" << endl;
		return 0;
	}
	if(a != b && a != c && b == c){
		if(a == "rock"){
			if(b == "scissors"){
				cout << "F" << endl;
				return 0;
			}
			else{
				cout << "?" << endl;
				return 0;
			}
		}
		else if(a == "paper"){
			if(b == "rock"){
				cout << "F" << endl;
				return 0;
			}
			else{
				cout << "?" << endl;
				return 0;
			}
		}
		else{
			if(b == "paper"){
				cout << "F" << endl;
				return 0;
			}
			else{
				cout << "?" << endl;
				return 0;
			}
		}
	}
	else if(c != b && a != c && b == a){
		if(c == "rock"){
			if(b == "scissors"){
				cout << "S" << endl;
				return 0;
			}
			else{
				cout << "?" << endl;
				return 0;
			}
		}
		else if(c == "paper"){
			if(b == "rock"){
				cout << "S" << endl;
				return 0;
			}
			else{
				cout << "?" << endl;
				return 0;
			}
		}
		else{
			if(b == "paper"){
				cout << "S" << endl;
				return 0;
			}
			else{
				cout << "?" << endl;
				return 0;
			}
		}
	}
	else if(a != b && b != c && a == c){
		if(b == "rock"){
			if(a == "scissors"){
				cout << "M" << endl;
				return 0;
			}
			else{
				cout << "?" << endl;
				return 0;
			}
		}
		else if(b == "paper"){
			if(a == "rock"){
				cout << "M" << endl;
				return 0;
			}
			else{
				cout << "?" << endl;
				return 0;
			}
		}
		else{
			if(a == "paper"){
				cout << "M" << endl;
				return 0;
			}
			else{
				cout << "?" << endl;
				return 0;
			}
		}
	}
	else{
		cout << '?' << endl;
	}
	return 0;
}
